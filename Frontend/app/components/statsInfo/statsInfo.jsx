"use client";

import { useState, useEffect } from "react";
import "./statsInfo.css";

export default function StatsInfo() {
  const [playerStats, setPlayerStats] = useState(null);

  useEffect(() => {
    const fetchPlayerStats = async () => {
      try {
        const stats = await saucer.exposed.get_player_stats();
        const parsedStats = JSON.parse(stats);
        setPlayerStats(parsedStats);
      } catch (error) {
        console.error("Error fetching player stats:", error);
      }
    };

    fetchPlayerStats();
  }, []);


  return (
    <div className="containerStats">
      <div className="title">Stats</div>
      <div className="stats">
        {playerStats ? (
          <>
            <p>Name: {playerStats.Name}</p>
            <p>Level: {playerStats.Level}</p>
            <p>
              Health: {playerStats.Health} / {playerStats["Max Health"]}
            </p>
            <p>
              Mana: {playerStats.Mana} / {playerStats["Max Mana"]}
            </p>
            <p>Strength: {playerStats.Strength}</p>
            <p>Defense: {playerStats.Defense}</p>
          </>
        ) : (
          <p>Loading...</p>
        )}
      </div>
    </div>
  );
}
