# Write your MySQL query statement below

select student_id, student_name, subject_name, sum(exam_count) attended_exams from (
select d.student_id, d.student_name, d.subject_name, 
case when e.student_id is null then 0 else 1 end as exam_count from (
select distinct student_id, student_name, subject_name from subjects s
 join students t
) as d
 left join examinations e
 on d.student_id = e.student_id and d.subject_name = e.subject_name
) 
 as subquery group by 1,2,3
 order by 1 asc

