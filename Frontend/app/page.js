"use client";

import { useState } from "react";
import TitleScreen from "./pages/TitleScreen/titleScreen";
import Navbar from "./components/navbar/navbar";
import Game from "./pages/Game/game";

export default function Home() {
  const [currentRoute, setCurrentRoute] = useState("TitleScreen");
  const [activeLink, setActiveLink] = useState("Home");

  return (
    <>
      {currentRoute === "TitleScreen" && <TitleScreen setCurrentRoute={setCurrentRoute} />}
      {currentRoute === "Game" && (
        <>
          <Navbar activeLink={activeLink} setActiveLink={setActiveLink} />

          {activeLink === "Home" && <Game />}
          {activeLink === "Wiki" && <div>Wiki Component or Content</div>}
          {activeLink === "Settings" && <div>Settings Component or Content</div>}
        </>
      )}
    </>
  );
}
