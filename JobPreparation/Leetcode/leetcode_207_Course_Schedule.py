class Solution:
    
    def top_sort_with_queue(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        indegree = [0]*numCourses
        dependent = [[] for _ in range(numCourses)]
        
        for course, pre_requisites in enumerate(prerequisites):
            indegree[course] = len(prerequisites)

            for required_course in pre_requisites:
                dependent[required_course].append(course)
        
        queue = deque()
        
        for index in range(numCourses):
            if indegree[index] == 0:
                queue.append(index)
        
        while(queue):
            course = queue.popleft()
            numCourses-=1

            for dependent_course in dependent[course]:
                indegree[dependent_course] -= 1
                if indegree[dependent_course] == 0:
                    queue.append(dependent_course)
        
        return numCourses == 0

    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        return self.top_sort_with_queue(numCourses, prerequisites)

