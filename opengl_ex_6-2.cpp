#include <GL/glut.h>

static float Delta = 0.0f;

void DisplayScene() {
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(Delta, 0.0f, 0.0f);
	glColor3f(0.2f, 0.7f, 0.3f);
	glutSolidCube(0.5);
	glPopMatrix();
	glutSwapBuffers();
}

void TimerCallback(int value) {
	Delta += 0.01f;
	glutPostRedisplay();
	glutTimerFunc(16, TimerCallback, 0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutCreateWindow("Timer callback Demo");
	glutDisplayFunc(DisplayScene);

	glutTimerFunc(0, TimerCallback, 0);
	return 0;
}