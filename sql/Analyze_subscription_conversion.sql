# Write your MySQL query statement below
select
 user_id, 
 round(avg(if (activity_type='free_trial',activity_duration,null)),2)  as trial_avg_duration,
round(avg(if (activity_type='paid',activity_duration,null)),2) as paid_avg_duration 
from UserActivity
group by user_id
having sum(activity_type='free_trial'>0) and sum(activity_type='paid')>0
order by user_id 