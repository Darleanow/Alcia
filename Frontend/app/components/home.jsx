"use client";

import "./home.css";
import ActionButton from "./actionButton";
import InfoComponent from "./infoComponent";
import StatsInfo from "./statsInfo";
import QuestsInfo from "./questsInfo";

export default function HomeComponent() {
  return (
    <div className="mainContainer">
      <div>
        <div className="alciaContainer">
          <div className="buttonContainer">
            <ActionButton
              title={"Explore"}
              description={"Discover the world around you.<br />Causes Events."}
            />
            <ActionButton
              title={"Search Monsters"}
              description={
                "Search for monsters in the area.<br />Triggers combat."
              }
            />
            <ActionButton
              title={"Search a city"}
              description={
                "Search and settle in a city.<br />Makes trade/buy available."
              }
            />
            <ActionButton
              title={"Inventory"}
              description={
                "View and manage your inventory.<br />Also permits equipment editing."
              }
            />
            <ActionButton
              title={"Rest"}
              description={
                "Recover Health and Mana.<br />This action consumes time."
              }
            />
            <ActionButton
              title={"Merchands"}
              description={"Trade with merchants."}
            />
          </div>
        </div>
        <div className="bottomInfos">
          <InfoComponent
            initialTitle="Region"
            initialValue="Nox Kingdom"
            initialSubTitle="SubRegion"
            initialSubValue="Bluhin"
          />
          <InfoComponent
            initialTitle="Date"
            initialValue="180 post valyre"
            initialSubTitle="Player Age"
            initialSubValue="6542 / 1000000"
          />
        </div>
      </div>
      <div className="rightContainer">
        <StatsInfo />
        <QuestsInfo />
      </div>
    </div>
  );
}
