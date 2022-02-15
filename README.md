# Database-Event-Date
Database of date-event pairs with operations ````Find(condition), Del(condition), Add(date, event), Last(date), Print().````

## Example input
````
Add 2017-11-21 Tuesday
Add 2017-11-20 Monday
Add 2017-11-21 Weekly meeting
Print
Find date >= 2017-01-01 AND date < 2017-12-01 AND event != "Tuesday" 
Del date < 2022-01-01 AND (event == "Monday" OR event == "Weekly meeting")
Add 2010-03-08 Birthday
Last 2015-06-04
Last 2020-05-07
````

## Example output
````
2017-11-20 Monday
2017-11-21 Tuesday
2017-11-21 Weekly meeting
2017-11-20 Monday
2017-11-21 Weekly meeting
Found 2 entries
Removed 2 entries
2010-03-08 Birthday
2017-11-21 Tuesday
````
