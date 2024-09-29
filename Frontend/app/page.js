"use client";

import { useState } from "react";
import styles from "./page.module.css";
import Navbar from "./components/Navbar/Navbar";
import TopBar from "./components/TopBar/TopBar";
import Resource from "./components/Resource/Resource";

export default function Home() {
  return (
    <div className={styles.main_game_screen}>
      <Navbar />
      <div className={styles.game_screen}>
        <TopBar
          currentHP={150}
          maxHP={190}
          currentMana={25}
          maxMana={50}
          currentEnergy={70}
          maxEnergy={80}
        />
        <div className={styles.resources_container}>
          <Resource
            resources={[
              {
                name: "Zombie",
                expireTime: 1,
                health: 100,
                strength: 15,
                defense: 5,
                resource_type: "Monster",
              },
              {
                name: "Zombie",
                expireTime: 2,
                health: 100,
                strength: 20,
                defense: 5,
                resource_type: "Monster",
              },
              {
                name: "Skeletton",
                expireTime: 4,
                health: 50,
                strength: 25,
                defense: 2,
                resource_type: "Monster",
              },
              {
                name: "Troll",
                expireTime: 0.3,
                health: 250,
                strength: 35,
                defense: 20,
                resource_type: "Monster",
              },
              {
                name: "Troll",
                expireTime: 0.3,
                health: 265,
                strength: 32,
                defense: 20,
                resource_type: "Monster",
              },
            ]}
          />
          <Resource
            resources={[
              {
                name: "Tree",
                expireTime: 0.5,
                drops: [
                  {
                    name: "Wood",
                    amount: [1, 4],
                  },
                  {
                    name: "Leaf",
                    amount: [0, 5],
                  },
                ],
              },
              {
                name: "Tree",
                expireTime: 0.5,
                drops: [
                  {
                    name: "Wood",
                    amount: [1, 4],
                  },
                  {
                    name: "Leaf",
                    amount: [0, 5],
                  },
                ],
              },
              {
                name: "Tree",
                expireTime: 0.5,
                drops: [
                  {
                    name: "Wood",
                    amount: [1, 4],
                  },
                  {
                    name: "Leaf",
                    amount: [0, 5],
                  },
                ],
              },
              {
                name: "Tree",
                expireTime: 0.5,
                drops: [
                  {
                    name: "Wood",
                    amount: [1, 4],
                  },
                  {
                    name: "Leaf",
                    amount: [0, 5],
                  },
                ],
              },
              {
                name: "Tree",
                expireTime: 0.5,
                drops: [
                  {
                    name: "Wood",
                    amount: [1, 4],
                  },
                  {
                    name: "Leaf",
                    amount: [0, 5],
                  },
                ],
              },
            ]}
          />
          <Resource />
        </div>
      </div>
    </div>
  );
}
