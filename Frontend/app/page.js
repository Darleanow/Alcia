"use client";

import { useState } from "react";
import styles from "./page.module.css";
import Navbar from "./components/Navbar/Navbar";
import TopBar from "./components/TopBar/TopBar";

export default function Home() {

  return (
    <div className={styles.main_game_screen}>
      <Navbar />
      <div className={styles.game_screen}>
        <TopBar currentHP={150} maxHP={190} currentMana={25} maxMana={50} currentEnergy={70} maxEnergy={80}/>
      </div>
    </div>
  );
}
