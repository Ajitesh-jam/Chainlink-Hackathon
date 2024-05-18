import React from 'react';

function Main() {
  return (
    <section className="main">
      <div className="main-top">
        <p>Explore the universe!</p>
      </div>
      <div className="main-body">
        <h1>Recent Jobs</h1>

        <div className="search_bar">
          <input type="search" placeholder="Search job here..." />
          <select name="">
            <option>Category</option>
            <option>Web Design</option>
            <option>App Design</option>
            <option>App Development</option>
          </select>
          <select className="filter">
            <option>Filter</option>
          </select>
        </div>

        <div className="tags_bar">
          <div className="tag">
            <i className="fas fa-times"></i>
            <span>Programming</span>
          </div>
          <div className="tag">
            <i className="fas fa-times"></i>
            <span>Design</span>
          </div>
          <div className="tag">
            <i className="fas fa-times"></i>
            <span>PHP</span>
          </div>
          <div className="tag">
            <i className="fas fa-times"></i>
            <span>JavaScript</span>
          </div>
        </div>

        <div className="row">
          <p>There are more than <span>400</span> Jobs</p>
          <a href="#">See all</a>
        </div>

        <JobCard
          icon="fab fa-google-drive"
          jobTitle="UX Designer"
          company="Google Drive"
          salary="$6.7 - $12.5k /yr"
          posted="1 days ago"
        />

        <JobCard
          icon="fab fa-google"
          jobTitle="JavaScript Developer"
          company="Google"
          salary="$8.7 - $13.2k /yr"
          posted="2 days ago"
        />

        <JobCard
          icon="fab fa-facebook"
          jobTitle="Product Developer"
          company="Facebook"
          salary="$11 - $18.5k /yr"
          posted="2 days ago"
        />

        <JobCard
          icon="fab fa-git-alt"
          jobTitle="Programmer"
          company="Github"
          salary="$6 - $11.5k /yr"
          posted="3 days ago"
        />

        <JobCard
          icon="fab fa-youtube"
          jobTitle="React.js Expert"
          company="Youtube"
          salary="$12.5 - $25.5k /yr"
          posted="4 days ago"
        />
      </div>
    </section>
  );
}

function AppDash() {
  return (<>
  
  </>

    
  );
}

export default AppDash;