import styles from "./Resource.module.css";

export default function Resource({ resources }) {
  return (
    <div className={styles.resource_container}>
      <div className={styles.resources}>
        {resources ? (
          resources.map((resource, index) => (
            <div key={index} className={styles.resource}>
              <div className={styles.resource_additional_container}>
                <div className={styles.resource_top_bar}>
                  <p className={styles.resource_name}>{resource.name}</p>
                  <p className={styles.resource_expire_time}>
                    expires in {resource.expireTime} hour
                    {resource.expireTime > 1 && "s"}
                  </p>
                </div>
                <div>
                  {resource.resource_type === "Monster" ? (
                    <div className={styles.resource_stat}>
                      <p className={styles.resource_health}>
                        <p className={styles.light_red}>Health</p>:{" "}
                        {resource.health}
                      </p>
                      <p className={styles.resource_strength}>
                        <p className={styles.light_orange}>Strength</p>:{" "}
                        {resource.strength}
                      </p>
                      <p className={styles.resource_defense}>
                        <p className={styles.light_blue}>Defense</p>:{" "}
                        {resource.defense}
                      </p>
                    </div>
                  ) : (
                    <div className={styles.resource_stat}>
                      {resource.drops ? (
                        resource.drops.map((drop, index) => (
                          <p key={index} className={styles.resource_drop}>
                            <p className={styles.drop_name}>{drop.name}</p>
                            <p className={styles.quantity}>
                              [{drop.amount[0]},{[drop.amount[1]]}]
                            </p>
                          </p>
                        ))
                      ) : (
                        <p className={styles.resource_drop}>Nothing.</p>
                      )}
                    </div>
                  )}
                </div>
              </div>
              {resource.resource_type === "Monster" ? (
                <svg
                  xmlns="http://www.w3.org/2000/svg"
                  width="1.918vw"
                  height="1.918vw"
                  viewBox="0 0 24 24"
                  className={styles.go_button_parent}
                >
                  <g
                    fill="none"
                    stroke="white"
                    className={styles.go_button}
                    strokeLinecap="round"
                    strokeWidth={1.5}
                  >
                    <path strokeLinejoin="round" d="m10.5 9l3 3l-3 3"></path>
                    <path d="M7 3.338A9.95 9.95 0 0 1 12 2c5.523 0 10 4.477 10 10s-4.477 10-10 10S2 17.523 2 12c0-1.821.487-3.53 1.338-5"></path>
                  </g>
                </svg>
              ) : (
                <svg
                  xmlns="http://www.w3.org/2000/svg"
                  width="1.918vw"
                  height="1.918vw"
                  viewBox="0 0 24 24"
                  className={styles.go_button_parent}
                >
                  <path
                    fill="none"
                    stroke="white"
                    className={styles.go_button}
                    strokeLinecap="round"
                    strokeWidth={1.5}
                    d="m18.66 8.286l.368-.368c.342-.343.514-.514.617-.692a1.56 1.56 0 0 0 0-1.562c-.103-.178-.275-.35-.617-.692s-.514-.514-.692-.616a1.56 1.56 0 0 0-1.562 0c-.178.102-.35.274-.692.616l-.368.368m-4.419 10.31l-5.523 5.524c-.343.343-.514.514-.692.617a1.56 1.56 0 0 1-1.562 0c-.179-.103-.35-.274-.692-.617c-.343-.342-.514-.514-.617-.692a1.56 1.56 0 0 1 0-1.562c.103-.178.274-.35.617-.692l5.523-5.523M18 17.75c-.898.827-1.542 1.24-2.286 1.24c-1.079 0-1.947-.868-3.682-2.604l-4.42-4.419C5.878 10.233 5.01 9.365 5.01 8.286s.868-1.946 2.604-3.682S10.217 2 11.295 2c1.079 0 1.947.868 3.682 2.604l4.42 4.419C21.131 10.758 22 11.626 22 12.705c0 .747-.416 1.392-1.248 2.295"
                  ></path>
                </svg>
              )}
            </div>
          ))
        ) : (
          <p>loading</p>
        )}
      </div>
    </div>
  );
}
