# Write your MySQL query statement below

select machine_id, round(sum(delta)/ (max_process_id+1),3) as processing_time from (
select  *, max(process_id) over(partition by machine_id) as max_process_id from(
select *,
(timestamp_end - timestamp) as delta
from (
select *,
lead(timestamp,1,0) over(partition by machine_id, process_id order by timestamp) as timestamp_end
from 
(
select * from activity order by machine_id asc, process_id asc, timestamp asc
) as subquery
) as subquery where timestamp_end !=0
) as subquery
 ) as subquery group by 1;