#include "Course.h"
Course::Course(std::string courseID){}

int Course::getNumberOfProjects() const {
	return number_of_projects;
}
void Course::setNumberOfProjects(int number_of_projects) {
	this->number_of_projects = number_of_projects;
}
int Course::getNumberOfGroups() const {
	return number_of_groups;
}
void Course::setNumbeOfGroups(int number_of_groups) {
	this->number_of_groups=number_of_groups;
}

void Course::addNewStudent(std::string studentName){}
void Course::addNewGroup(int groupID){}
void Course::addStudentToAGroup(Student* student, int groupID) {}
void Course::deleteStudentFromAGroup(){}
void Course::addNewProject(int projectID){}
void Course::submit(int groupID, int projectID, int submitDate){}

Group* Course::findGroupByID(int ID){}

Project* Course::findProjectbyID(int ID){}

Submission* Course::findSubmission(int projectID, int groupID){}

Submission* Course::findSubmissionByProjectID(int projectID){}

Submission* Course::findSubmissionByGroupID(int projectID){}

Submission* Course::findSubmissionByStatus(bool status){}

Submission* Course::findSubmissionToDueDate(int dueDate){}