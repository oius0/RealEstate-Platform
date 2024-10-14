// src/App.js
import React, { useState } from 'react';
import { BrowserRouter as Router, Routes, Route } from 'react-router-dom';
import PropertyList from PropertyList.js;
import Search from Search.js;
import Login from Login.js;

const App = () => {
  const [properties, setProperties] = useState([]);
  const [authToken, setAuthToken] = useState(localStorage.getItem('authToken') || '');

  return (
    <Router>
      <div>
        <h1>Real Estate Platform</h1>
        {!authToken ? (
          <Login setAuthToken={setAuthToken} />
        ) : (
          <>
            <Search setProperties={setProperties} />
            <PropertyList properties={properties} />
          </>
        )}
      </div>
    </Router>
  );
};

export default App;
