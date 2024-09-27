import styles from "./TopBar.module.css";

export default function TopBar({ currentHP, maxHP, currentMana, maxMana, currentEnergy, maxEnergy }) {
  const healthPercentage = (currentHP / maxHP) * 100;
  const manaPercentage = (currentMana / maxMana) * 100;
  const energyPercentage = (currentEnergy / maxEnergy) * 100;

  return (
    <div className={styles.topbar_container}>
      <p className={styles.level_text}>Level 19</p>
      
      <div className={styles.health_bar_container}>
        <div className={styles.health_bar_background}>
          <div
            className={styles.health_bar_value}
            style={{ width: `${healthPercentage}%` }}
          />
        </div>
        <p className={styles.health_text}>
          {currentHP} / {maxHP} HP
        </p>
      </div>
      
      <div className={styles.mana_bar_container}>
        <div className={styles.mana_bar_background}>
          <div
            className={styles.mana_bar_value}
            style={{ width: `${manaPercentage}%` }}
          />
        </div>
        <p className={styles.mana_text}>
          {currentMana} / {maxMana} Mana
        </p>
      </div>
      
      <div className={styles.energy_bar_container}>
        <div className={styles.energy_bar_background}>
          <div
            className={styles.energy_bar_value}
            style={{ width: `${energyPercentage}%` }}
          />
        </div>
        <p className={styles.energy_text}>
          {currentEnergy} / {maxEnergy} Energy
        </p>
      </div>
      
    </div>
  );
}
