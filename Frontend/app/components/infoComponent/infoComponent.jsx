"use client";

import { useState } from "react";
import "./infoComponent.css";

export default function InfoComponent({
  initialTitle,
  initialValue,
  initialSubTitle,
  initialSubValue,
}) {
  const [value, setValue] = useState(initialValue);
  const [subValue, setSubValue] = useState(initialSubValue);

  function updateValues(newValue, newSubValue) {
    setValue(newValue);
    setSubValue(newSubValue);
  }

  return (
    <div className="infoContainer">
      <div>
        <p className="infoTitle">{initialTitle}</p>
        <p className="infoValue">{value}</p>
      </div>
      <div>
        <p className="infoSubTitle">{initialSubTitle}</p>
        <p className="infoSubValue">{subValue}</p>
      </div>
    </div>
  );
}
