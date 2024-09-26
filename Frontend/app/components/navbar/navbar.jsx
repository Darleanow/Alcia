import styles from "./Navbar.module.css";

export default function Navbar() {
  return (
    <div className={styles.navbar_container}>
      <div className={styles.navbar_top_container}>
        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <path
            fill="none"
            stroke="white"
            strokeLinecap="round"
            strokeWidth={1.5}
            className={styles.navbar_icon_selected}
            d="M15 18H9m12.636-5.042l-.279 1.937c-.487 3.388-.731 5.081-1.906 6.093S16.553 22 13.106 22h-2.212c-3.447 0-5.17 0-6.345-1.012s-1.419-2.705-1.906-6.093l-.279-1.937c-.38-2.637-.57-3.956-.029-5.083s1.691-1.813 3.992-3.183l1.385-.825C9.8 2.622 10.846 2 12 2s2.199.622 4.288 1.867l1.385.825c2.3 1.37 3.451 2.056 3.992 3.183"
          ></path>
        </svg>

        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <g
            fill="none"
            stroke="white"
            strokeLinecap="round"
            strokeWidth={1.5}
            className={styles.navbar_icon}
          >
            <path d="M21 10.73v5.645a4.52 4.52 0 0 1-3.538 4.411c-3.598.8-7.326.8-10.923 0A4.52 4.52 0 0 1 3 16.376V10.73a6 6 0 0 1 4.618-5.757l.176-.04l.167-.036a19 19 0 0 1 8.078 0l.167.037l.176.04A6 6 0 0 1 19.632 7M17.5 15.5V17"></path>
            <path d="M15.959 4.5A3 3 0 0 0 13 2h-2a3 3 0 0 0-2.959 2.5M3 14a22.2 22.2 0 0 0 5 1.546M21 14a22.15 22.15 0 0 1-9 1.91M10 13h4"></path>
          </g>
        </svg>

        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <path
            fill="none"
            stroke="white"
            strokeLinecap="round"
            strokeWidth={1.5}
            className={styles.navbar_icon}
            d="M21 7.162c0-1.043 0-1.565-.283-1.958s-.778-.558-1.768-.888l-1.165-.388c-1.367-.456-2.05-.684-2.739-.591c-.688.092-1.288.491-2.487 1.29l-1.382.922c-.936.624-1.404.936-1.93 1.06a3 3 0 0 1-.587.08c-.54.018-1.073-.16-2.14-.516c-1.398-.466-2.097-.699-2.629-.462a1.5 1.5 0 0 0-.497.358C3 6.5 3 7.236 3 8.71v4.065M21 11v4.29c0 1.474 0 2.211-.393 2.64a1.5 1.5 0 0 1-.497.36c-.532.236-1.231.003-2.629-.463c-1.067-.356-1.6-.534-2.14-.515a3 3 0 0 0-.588.078c-.525.125-.993.437-1.929 1.06l-1.382.922c-1.2.8-1.799 1.2-2.487 1.291c-.688.093-1.372-.135-2.739-.591l-1.165-.388c-.99-.33-1.485-.495-1.768-.888c-.268-.372-.282-.86-.283-1.796M15 3.5V7m0 10v-6m-6 9.5V17M9 7v6"
          ></path>
        </svg>

        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <g
            fill="none"
            stroke="white"
            strokeWidth={1.5}
            className={styles.navbar_icon}
          >
            <path
              strokeLinecap="round"
              d="M10 22c-2.828 0-4.243 0-5.121-.879C4 20.243 4 18.828 4 16V8c0-2.828 0-4.243.879-5.121C5.757 2 7.172 2 10 2h4c2.828 0 4.243 0 5.121.879C20 3.757 20 5.172 20 8m-6 14c2.828 0 4.243 0 5.121-.879C20 20.243 20 18.828 20 16v-4"
            ></path>
            <path d="M19.898 16h-12c-.93 0-1.395 0-1.777.102A3 3 0 0 0 4 18.224"></path>
            <path
              strokeLinecap="round"
              d="M7 16V9m0-6.5V5m6 11v3.53c0 .276 0 .414-.095.47s-.224-.006-.484-.13l-1.242-.59c-.088-.04-.132-.062-.179-.062s-.091.021-.179.063l-1.242.59c-.26.123-.39.185-.484.129C9 19.944 9 19.806 9 19.53v-3.08"
            ></path>
          </g>
        </svg>

        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <path
            fill="none"
            stroke="white"
            strokeLinecap="round"
            strokeWidth={1.5}
            d="m11.848 12.152l.198.069c3.26 1.122 7.184.049 9.954-2.721m-10.152 2.652l-.558-.191C8.248 10.913 4.585 11.915 2 14.5m9.848-2.348l-.069-.198C10.657 8.694 11.73 4.77 14.5 2m-2.652 10.152l.191.558c1.048 3.041.046 6.705-2.539 9.29m.5-7l1.843 1.922m-5.078-5.079L8 13.08m3.844-6.315L14 9m2 2l.922.843M4 13l3.5 3.5m12.278-5.61l-3.5-3.5M9.305 18.191l1.587 1.587m3.695-14.191L13 4"
            className={styles.navbar_icon}
          ></path>
        </svg>

        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <path
            fill="none"
            stroke="white"
            strokeLinecap="round"
            strokeWidth={1.5}
            className={styles.navbar_icon}
            d="m18.66 8.286l.368-.368c.342-.343.514-.514.617-.692a1.56 1.56 0 0 0 0-1.562c-.103-.178-.275-.35-.617-.692s-.514-.514-.692-.616a1.56 1.56 0 0 0-1.562 0c-.178.102-.35.274-.692.616l-.368.368m-4.419 10.31l-5.523 5.524c-.343.343-.514.514-.692.617a1.56 1.56 0 0 1-1.562 0c-.179-.103-.35-.274-.692-.617c-.343-.342-.514-.514-.617-.692a1.56 1.56 0 0 1 0-1.562c.103-.178.274-.35.617-.692l5.523-5.523M18 17.75c-.898.827-1.542 1.24-2.286 1.24c-1.079 0-1.947-.868-3.682-2.604l-4.42-4.419C5.878 10.233 5.01 9.365 5.01 8.286s.868-1.946 2.604-3.682S10.217 2 11.295 2c1.079 0 1.947.868 3.682 2.604l4.42 4.419C21.131 10.758 22 11.626 22 12.705c0 .747-.416 1.392-1.248 2.295"
          ></path>
        </svg>

        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <g fill="none" className={styles.navbar_icon}>
            <path
              fill="white"
              d="M3.75 18a.75.75 0 0 0-1.5 0zm-1.5-4a.75.75 0 0 0 1.5 0zM7 8.75c.964 0 1.612.002 2.095.067c.461.062.659.169.789.3l1.06-1.062c-.455-.455-1.022-.64-1.65-.725c-.606-.082-1.372-.08-2.294-.08zM11.75 12c0-.922.002-1.688-.08-2.294c-.084-.628-.27-1.195-.726-1.65l-1.06 1.06c.13.13.237.328.3.79c.064.482.066 1.13.066 2.094zM7 7.25c-.922 0-1.688-.002-2.294.08c-.628.084-1.195.27-1.65.725l1.06 1.061c.13-.13.328-.237.79-.3c.482-.064 1.13-.066 2.094-.066zM3.75 12c0-.964.002-1.612.067-2.095c.062-.461.169-.659.3-.789l-1.062-1.06c-.455.455-.64 1.022-.725 1.65c-.082.606-.08 1.372-.08 2.294zm0 10v-4h-1.5v4zm0-8v-2h-1.5v2z"
            ></path>
            <path
              stroke="white"
              strokeLinecap="round"
              strokeWidth={1.5}
              d="M7 22v-6c0-1.886 0-2.828.586-3.414S9.114 12 11 12h2c1.886 0 2.828 0 3.414.586c.472.471.564 1.174.582 2.414M17 22v-2.75m4-11.478c0-1.34 0-2.011-.356-2.525s-.984-.75-2.24-1.22c-2.455-.921-3.682-1.381-4.543-.785C13 3.84 13 5.15 13 7.772V12m8 10V12M4 8V6.5c0-.943 0-1.414.293-1.707S5.057 4.5 6 4.5h2c.943 0 1.414 0 1.707.293S10 5.557 10 6.5V8M7 4V2m15 20H2m8-7h.5m3.5 0h-1.5M10 18h4"
            ></path>
          </g>
        </svg>

        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <path
            fill="none"
            stroke="white"
            strokeLinecap="round"
            strokeWidth={1.5}
            className={styles.navbar_icon}
            d="M15.268 18.229c-1.98 2.678-2.969 4.017-3.892 3.734s-.923-1.925-.923-5.21v-.31c0-1.185 0-1.777-.379-2.148l-.02-.02c-.387-.363-1.003-.363-2.236-.363c-2.22 0-3.329 0-3.703-.673l-.019-.034c-.354-.683.289-1.552 1.574-3.29L8.732 5.77c1.979-2.678 2.969-4.017 3.892-3.734s.923 1.925.923 5.21v.31c0 1.185 0 1.777.379 2.148l.02.02c.387.363 1.003.363 2.236.363c2.22 0 3.329 0 3.704.673l.018.034c.354.683-.289 1.553-1.574 3.29"
          ></path>
        </svg>
      </div>
      <div className={styles.navbar_bottom_container}>
        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <path
            fill="none"
            stroke="white"
            strokeLinecap="round"
            strokeLinejoin="round"
            strokeWidth={1.5}
            className={styles.navbar_icon}
            d="M12 3v13m0 0l4-4.375M12 16l-4-4.375M15 21H9c-2.828 0-4.243 0-5.121-.879C3 19.243 3 17.828 3 15m18 0c0 2.828 0 4.243-.879 5.121c-.3.3-.662.498-1.121.628"
          ></path>
        </svg>

        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <path
            fill="none"
            stroke="white"
            strokeLinecap="round"
            strokeWidth={1.5}
            className={styles.navbar_icon}
            d="M21 16c0 2.828 0 4.243-.879 5.121C19.243 22 17.828 22 15 22H9c-2.828 0-4.243 0-5.121-.879C3 20.243 3 18.828 3 16V8c0-2.828 0-4.243.879-5.121C4.757 2 6.172 2 9 2h6c2.828 0 4.243 0 5.121.879C21 3.757 21 5.172 21 8v4M8 2v4m0 16V10m-6 2h2m-2 4h2M2 8h2m7.5-1.5h5m-5 3.5h5"
          ></path>
        </svg>
        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <path
            fill="none"
            stroke="white"
            strokeLinecap="round"
            strokeWidth={1.5}
            className={styles.navbar_icon}
            d="M9.107 2.674A6.5 6.5 0 0 1 12 2c3.727 0 6.75 3.136 6.75 7.005v.705a4.4 4.4 0 0 0 .692 2.375l1.108 1.724c1.011 1.575.239 3.716-1.52 4.214a25.8 25.8 0 0 1-14.06 0c-1.759-.498-2.531-2.639-1.52-4.213l1.108-1.725A4.4 4.4 0 0 0 5.25 9.71v-.705c0-1.074.233-2.092.65-3.002M7.5 19c.655 1.748 2.422 3 4.5 3q.367 0 .72-.05M16.5 19a4.5 4.5 0 0 1-1.302 1.84"
          ></path>
        </svg>

        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <g
            fill="none"
            stroke="white"
            strokeWidth={1.5}
            className={styles.navbar_icon}
          >
            <path
              strokeLinecap="round"
              d="M7.843 20.198C9.872 21.399 10.886 22 12 22s2.128-.6 4.157-1.802l.686-.407c2.029-1.2 3.043-1.802 3.6-2.791c.557-.99.557-2.19.557-4.594M20.815 8a3.6 3.6 0 0 0-.372-1c-.557-.99-1.571-1.59-3.6-2.792l-.686-.406C14.128 2.601 13.114 2 12 2s-2.128.6-4.157 1.802l-.686.406C5.128 5.41 4.114 6.011 3.557 7C3 7.99 3 9.19 3 11.594v.812c0 2.403 0 3.605.557 4.594c.226.402.528.74.943 1.08"
            ></path>
            <circle cx={12} cy={12} r={3}></circle>
          </g>
        </svg>
        <svg
          xmlns="http://www.w3.org/2000/svg"
          width="1.918vw"
          height="1.918vw"
          viewBox="0 0 24 24"
          className={styles.svg_container}
        >
          <path
            fill="none"
            stroke="white"
            strokeLinecap="round"
            strokeWidth={1.5}
            className={styles.navbar_icon_exit}
            d="M9 4.5H8c-2.357 0-3.536 0-4.268.732S3 7.143 3 9.5v.5m6 9.5H8c-2.357 0-3.536 0-4.268-.732C3 18.035 3 16.857 3 14.5V14M13.658 2.347c-2.162-.377-3.243-.565-3.95.062S9 4.183 9 6.476v11.048c0 2.293 0 3.44.707 4.067s1.788.439 3.95.062l2.33-.406c2.394-.418 3.591-.627 4.302-1.505c.711-.879.711-2.149.711-4.69V8.948c0-2.54 0-3.81-.71-4.689c-.476-.587-1.168-.875-2.29-1.126M12 11v2"
          ></path>
        </svg>
      </div>
    </div>
  );
}
