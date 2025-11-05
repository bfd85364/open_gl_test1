/*IDLE 콜백 프로그래밍*/

//#include <GL/glut.h>
//
//float g_rotation_angle = 0.0f;
//
//void display() {
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	glPushMatrix();
//	glRotatef(g_rotation_angle, 0.0, 0.0, 1.0);
//
//	glBegin(GL_QUADS);
//		glColor3f(1.0, 0.0, 0.0);
//		glVertex2f(-0.5, -0.5);
//		glColor3f(0.0, 1.0, 0.0);
//		glVertex2f(0.5, -0.5);
//		glColor3f(0.0, 0.0, 1.0);
//		glVertex2f(0.5, 0.5);
//		glColor3f(1.0, 1.0, 0.0);
//		glVertex2f(0.5, -0.5);
//	glEnd();
//
//	glPopMatrix();
//
//	glutSwapBuffers();
//}
//
//void idleCallback() {
//	g_rotation_angle += 0.1f;
//
//	if (g_rotation_angle > 360.0f) {
//		g_rotation_angle -= 360.0f;
//	}
//
//	glutPostRedisplay();
//}
//
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//	glutInitWindowSize(500, 500);
//	glutCreateWindow("OpenGL Idle Callback Animation");
//
//	glutDisplayFunc(display);
//
//	glutIdleFunc(idleCallback);
//
//	glutMainLoop();
//	return 0;
//}