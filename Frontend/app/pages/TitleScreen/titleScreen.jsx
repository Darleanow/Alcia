import { useState } from "react";
import "./titleScreen.css";
import { IoClose } from "react-icons/io5";

export default function TitleScreen({ setCurrentRoute }) {
  const [activePopup, setActivePopup] = useState(null);
  const [username, setUsername] = useState("");
  const [inputError, setInputError] = useState("");

  const handlePopup = (type) => {
    setActivePopup(type);
  };

  const closePopup = () => {
    setActivePopup(null);
  };

  const handleUsernameChange = (e) => {
    const value = e.target.value;
    setUsername(value);

    if (value.length > 0 && value.length < 3) {
      setInputError("Username must be at least 3 characters long");
    } else {
      setInputError("");
    }
  };

  const handlePlayerCreation = async () => {
    if (username.length < 3) {
      return;
    } else {
      const res = await saucer.exposed.create_player(username);
      if (res === "Success") {
        setCurrentRoute("Game");
      }
    }
  };

  const handleClose = async () => {
    await saucer.exposed.exit_game();
  };

  return (
    <>
      <div className="topBar">
        <p className="linkPopUp" onClick={() => handlePopup("about")}>
          About
        </p>
        <p className="linkPopUp" onClick={() => handlePopup("contact")}>
          Contact
        </p>

        {activePopup === "about" && (
          <div className="popup">
            <div className="popupContent">
              <IoClose onClick={closePopup} className="closeButton" />
              <p className="aboutText">
                Alcia is a reflection of the worlds I used to imagine as a kid,
                combined with fragments of my experiences throughout life. It’s
                a place where memories, dreams, and reality intersect, creating
                a world that’s both personal and shared.
                <br /> Every part of the game, from the landscapes to the
                characters, holds a piece of those stories—some familiar, some
                entirely new. It’s a journey through the past and present, a way
                to explore and share what’s shaped my imagination. Welcome to
                Alcia, a world where every step tells a part of my story.
                <br /> Some parts are modified, some are not. What I wanted to
                illustrate is my story, through lore, discussions,
                interactions...
                <br /> Have fun !
              </p>
              <p className="aboutAuthor">Enzo</p>
            </div>
          </div>
        )}

        {activePopup === "contact" && (
          <div className="popup">
            <div className="popupContent">
              <IoClose onClick={closePopup} className="closeButton" />
              <p className="contactText">
                Issue ? Bug report ? <br /> Open an issue on the project:
                <a
                  href="https://github.com/Darleanow/Alcia/issues"
                  className="githubLink"
                  target="_blank"
                >
                  Alcia Github Project
                </a>
                <br />
                <br />
                <br /> For anything else, feel free to send an email:
                <br />
                <a href="mailto:contact@darleanow.com" className="mailTo">
                  contact@darleanow.com
                </a>
              </p>
            </div>
          </div>
        )}
      </div>

      <div className="titleContainer">
        <div className="titleScreen">Alcia</div>
        <div className="titleDescription">Made with &lt;3 by a student</div>
      </div>

      <div className="inputContainer">
        <input
          type="text"
          placeholder="Enter your pseudo here"
          className={`inputPseudo ${inputError ? "error" : ""}`}
          value={username}
          onChange={handleUsernameChange}
        />
        <p className={`errorMessage ${inputError ? "show" : ""}`}>
          {inputError}
        </p>
      </div>

      <div className="actionButtons">
        <button
          type="button"
          className="actionButton alwaysOn"
          onClick={handlePlayerCreation}
        >
          Play Game
        </button>
        <button type="button" className="actionButton">
          Load Game
        </button>
        <button type="button" className="actionButton">
          Settings
        </button>
        <button type="button" className="actionButton" onClick={handleClose}>
          Exit Game
        </button>
      </div>
    </>
  );
}
