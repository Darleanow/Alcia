import "./actionButton.css";

export default function ActionButton({ title, description }) {
    return (
      <div className="actionContainer">
        <p className="actionTitle">{title}</p>
        <div
          className="actionDescription"
          dangerouslySetInnerHTML={{ __html: description }}
        />
      </div>
    );
  }