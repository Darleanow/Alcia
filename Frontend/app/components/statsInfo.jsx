import "./statsInfo.css";

export default function StatsInfo()
{
  return (
    <div className="containerStats">
      <div className="title">Stats</div>
      <div className="stats">
        <p>Level: 8</p>
        <p>Health: 170 / 170</p>
        <p>Mana: 80 / 100</p>
        <p>Strength: 25</p>
        <p>Defense: 10</p>
      </div>
    </div>
  );
}