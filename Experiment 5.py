tasks = []

tasks.append("Study")
tasks.append("Exercise")
tasks.append("Sleep")

tasks[1] = "Play" #update task
tasks.remove("Sleep") #remove task 
tasks.sort() #sort tasks

task_tuple = tuple(tasks)

for t in task_tuple:
    print(t)
