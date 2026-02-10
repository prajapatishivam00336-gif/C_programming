#create student records
grades = {"shivam":"A", "om":"B"}
attendance = {"shivam":90,"om":85}

#update a student grades and attendance
grades["om"] = "A"
attendance["shivam"] = 88

#add a new student
grades["charlie"] = "C"
attendance["charlie"] = 80

#remove a student
grades.pop("shivam")
attendance.pop("shivam")

#display student records
for student in grades:
 print(student,"- grade:",grades[student],",attendance:",attendance[student])
