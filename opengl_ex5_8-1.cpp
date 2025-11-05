/* 메뉴 콜백 */

/*예제1*/

//#include <GL/glut.h>
//
////색상 지정 
//float g_red = 1.0f;
//float g_green = 0.0f;
//float g_blue = 0.0f;
//
////메뉴 콜백 함수 
//
//void menuCallback(int option) {
//	switch (option) {
//	case 1:
//		g_red = 1.0f;
//		g_green = 0.0f;
//		g_blue = 0.0f;
//		break;
//
//	case 2:
//		g_red = 0.0f;
//		g_green = 0.0f;
//		g_blue = 1.0f;
//		break;
//	case 3:
//		exit(0);
//		break;
//	}
//
//	glutPostRedisplay();
//}
//
//void display() {
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	//현재 색상으로 사각형 그리기
//	glColor3f(g_red, g_green, g_blue);
//	glBegin(GL_POLYGON);
//		glVertex2f(-0.5, -0.5);
//		glVertex2f(0.5, -0.5);
//		glVertex2f(0.5, 0.5);
//		glVertex2f(-0.5, 0.5);
//	glEnd();
//
//	glFlush();
//}
//
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutCreateWindow("OpenGL Menu Callback Example");
//	glutInitWindowSize(500, 500);
//
//	glutCreateMenu(menuCallback);
//	glutAddMenuEntry("Red", 1);
//	glutAddMenuEntry("Blue", 2);
//	glutAddMenuEntry("Exit", 99);
//
//	glutAttachMenu(GLUT_RIGHT_BUTTON);
//
//	glutDisplayFunc(display);
//	glutMainLoop();
//
//	return 0;
//}