#include "Course.h"
Course::Course(std::string courseID){}

void Course::addNewStudent(std::string studentName){}
void Course::addNewGroup(int groupID){}
void Course::addStudentToAGroup(Student student, int groupID) {}
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