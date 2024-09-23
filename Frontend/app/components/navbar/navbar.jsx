"use client";

import "./navbar.css";

export default function Navbar({ activeLink, setActiveLink }) {
  return (
    <div className="container">
      <div className="logo">
        <div className="logoImg">
          {/* eslint-disable-next-line @next/next/no-img-element */}
          <img src="logo.svg" alt="logo" />
        </div>

        <p className="logoText">Alcia</p>
      </div>

      <div className="links">
        <button
          type="button"
          className={`link ${activeLink === "Home" ? "active" : ""}`}
          onClick={() => setActiveLink("Home")}
        >
          Home
        </button>
        <button
          type="button"
          className={`link ${activeLink === "Wiki" ? "active" : ""}`}
          onClick={() => setActiveLink("Wiki")}
        >
          Wiki
        </button>
        <button
          type="button"
          className={`link ${activeLink === "Settings" ? "active" : ""}`}
          onClick={() => setActiveLink("Settings")}
        >
          Settings
        </button>
      </div>
    </div>
  );
}
