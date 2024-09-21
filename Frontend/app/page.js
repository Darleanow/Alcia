"use client";

import { useState } from "react";
import Navbar from "./components/navbar";
import HomeComponent from "./components/home";

export default function Home() {
  const [activeLink, setActiveLink] = useState("Home"); // State managed here

  return (
    <>
      <Navbar activeLink={activeLink} setActiveLink={setActiveLink} />

      {activeLink === "Home" && <HomeComponent />}
      {activeLink === "Wiki" && <div>Wiki Component or Content</div>}
      {activeLink === "Settings" && <div>Settings Component or Content</div>}
    </>
  );
}
