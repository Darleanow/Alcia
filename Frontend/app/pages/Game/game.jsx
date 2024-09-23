"use client";

import "./game.css";
import ActionButton from "../../components/actionButton/actionButton";
import InfoComponent from "../../components/infoComponent/infoComponent";
import StatsInfo from "../../components/statsInfo/statsInfo";
import QuestsInfo from "../../components/questsInfo/questsInfo";

export default function Game() {
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
