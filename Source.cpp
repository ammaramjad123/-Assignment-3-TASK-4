// Task 4 //
#include "Header.h"
int main() {
	TeachingAssistant ta;
	ta.setName("Syed Ammar Amjad");
	ta.setAge(20);
	ta.setMajor("Computer Science");
	ta.setSalary(70000);
	ta.subject = "Programming";

	ta.displayTeachingAssistantInfo(ta);
	
	system("pause");
	return 0;
}
