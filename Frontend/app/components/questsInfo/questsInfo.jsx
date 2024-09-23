import "./questsInfo.css";

export default function QuestsInfo()
{
  return (
    <div className="containerQuests">
      <div className="titleQuests">Quests</div>
      <div className="quests">
        <div className="quest">
          <p className="questTitle">Gathering Resources</p>
          <ul className="questDetails">
            <li className="completed">Collect 10 wood</li>
            <li className="notCompleted">Collect 5 stone</li>
            <li className="notCompleted">Collect 3 iron</li>
          </ul>
        </div>
        <div className="quest">
          <p className="questTitle">Figthing Monsters</p>
          <ul className="questDetails">
            <li className="notCompleted">Defeat 5 slimes</li>
            <li className="notStarted">Defeat 3 skeletons</li>
            <li className="notStarted">Defeat 1 dragon</li>
          </ul>
        </div>
      </div>
    </div>
  );
}