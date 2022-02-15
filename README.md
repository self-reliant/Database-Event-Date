# Database-Event-Date
Database of date-event pairs with operations Find(condition), Del(condition), Add(date, event), Last(date), Print().

## Example input:
Add 2017-11-21 Tuesday  
Add 2017-11-20 Monday  
Add 2017-11-21 Weekly meeting  
Print  
Find event != "Weekly meeting"  
Last 2017-11-30  
Del date > 2017-11-20  
Last 2017-11-30  
Last 2017-11-01  

## Example output:
2017-11-20 Monday  
2017-11-21 Tuesday  
2017-11-21 Weekly meeting  
2017-11-20 Monday  
2017-11-21 Tuesday  
Found 2 entries  
2017-11-21 Weekly meeting  
Removed 2 entries  
2017-11-20 Monday  
No entries  
