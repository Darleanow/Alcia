import styles from "./MoneyAndSoulsComponent.module.css";

export default function MoneyAndSoulsComponent({ money, souls }) {
  return (
    <div className={styles.container}>
      <div className={styles.money}>
        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
        >
          <g
            fill="none"
            stroke="white"
            strokeWidth={1.5}
            className={styles.money_icon}
          >
            <path
              strokeLinecap="round"
              d="M15 5H9c-2.809 0-4.213 0-5.222.674a4 4 0 0 0-1.104 1.104C2 7.787 2 9.19 2 12s0 4.213.674 5.222a4 4 0 0 0 1.104 1.104c.347.232.74.384 1.222.484M9 19h6c2.809 0 4.213 0 5.222-.674a4 4 0 0 0 1.104-1.104C22 16.213 22 14.81 22 12s0-4.213-.674-5.222a4 4 0 0 0-1.104-1.104c-.347-.232-.74-.384-1.222-.484"
            ></path>
            <path d="M9 9a3 3 0 1 0 0 6m6-6a3 3 0 1 1 0 6"></path>
            <path strokeLinecap="round" d="M9 5v14m6-14v14"></path>
          </g>
        </svg>
        <p className={styles.money_text}>{money} natimes</p>
      </div>
      <div className={styles.souls}>
        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
        >
          <g fill="none">
            <path
              fill="#5B81FF"
              d="M16 10.5c0 .828-.448 1.5-1 1.5s-1-.672-1-1.5s.448-1.5 1-1.5s1 .672 1 1.5"
            ></path>
            <ellipse cx={9} cy={10.5} fill="#5B81FF" rx={1} ry={1.5}></ellipse>
            <path
              stroke="#5B81FF"
              strokeLinecap="round"
              strokeWidth={1.5}
              d="M22 12.3C22 6.613 17.523 2 12 2S2 6.612 2 12.3v7.423c0 1.322 1.351 2.182 2.5 1.591a2.82 2.82 0 0 1 2.896.186a2.82 2.82 0 0 0 3.208 0l.353-.242a1.84 1.84 0 0 1 2.086 0l.353.242a2.82 2.82 0 0 0 3.208 0a2.82 2.82 0 0 1 2.897-.186c1.148.591 2.499-.269 2.499-1.591v-3.711"
            ></path>
          </g>
        </svg>
        <p className={styles.souls_text}>{souls} souls </p>
      </div>
    </div>
  );
}
