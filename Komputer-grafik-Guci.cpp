#include <gl\glut.h>
#include <math.h>
#define PI 3.14


GLint circle_p=100;
GLint circle_points=60;


void kepala(GLfloat radius){
GLint i;
	GLdouble theta, ntheta;
	for (i=0; i<circle_points; i++) { 

		glBegin(GL_POLYGON);
		theta=(2*PI*i/circle_points);
		ntheta=(2*PI*(i+1)/circle_points);
		glVertex3f(0.1*cos(theta),0.34,radius*sin(theta));
	        glVertex3f(0.05*cos(ntheta),0.23,radius*sin(ntheta));
		glVertex3f(0.1*cos(ntheta),0.34,radius*sin(ntheta));
		glVertex3f(0.1*cos(theta),0.34,radius*sin(theta));
		glVertex3f(0.13*cos(theta),0.34,radius*sin(theta));
			glEnd();
 
}
}

void leher(GLfloat radius,GLfloat tinggi){
GLint i;
	GLdouble theta, ntheta;
	for (i=0; i<circle_points; i++) { 

		glBegin(GL_POLYGON);
		theta=(2*PI*i/circle_points);
		ntheta=(2*PI*(i+1)/circle_points);
		glVertex3f(0.05*cos(theta),0.24,radius*sin(theta));
	    glVertex3f(0.11*cos(ntheta),0.12,radius*sin(ntheta));
		glVertex3f(0.05*cos(theta),0.24,radius*sin(theta));
			glEnd();
 
		
 
}
}

void badan1(GLfloat radius,GLfloat tinggi){
GLint i;
	GLdouble theta, ntheta;
	for (i=0; i<circle_points; i++) { 

		glBegin(GL_POLYGON);
		theta=(2*PI*i/circle_points);
		ntheta=(2*PI*(i+1)/circle_points);
		glVertex3f(0.11*cos(theta),0.12,radius*sin(theta));
	    glVertex3f(0.2*cos(ntheta),0.0,radius*sin(ntheta));
		glVertex3f(radius*cos(ntheta),0.12,radius*sin(ntheta));
		glVertex3f(radius*cos(theta),0.12,radius*sin(theta));
		glVertex3f(radius*cos(theta),0.12,radius*sin(theta));
			glEnd(); 
}
}

void badan2(GLfloat radius,GLfloat tinggi){
GLint i;
	GLdouble theta, ntheta;
	for (i=0; i<circle_points; i++) { 

		glBegin(GL_POLYGON);
		theta=(2*PI*i/circle_points);
		ntheta=(2*PI*(i+1)/circle_points);
		glVertex3f(0.2*cos(theta),0.0,radius*sin(theta));
	    glVertex3f(0.25*cos(ntheta),-0.1,radius*sin(ntheta));
		glVertex3f(0.2*cos(ntheta),0.0,radius*sin(ntheta));
		glVertex3f(0.2*cos(theta),0.0,radius*sin(theta));
		glVertex3f(0.2*cos(theta),0.0,radius*sin(theta));
			glEnd(); 
}
}
void badan3(GLfloat radius,GLfloat tinggi){
GLint i;
	GLdouble theta, ntheta;
	for (i=0; i<circle_points; i++) { 

		glBegin(GL_POLYGON);
		theta=(2*PI*i/circle_points);
		ntheta=(2*PI*(i+1)/circle_points);
		glVertex3f(0.25*cos(theta),-0.1,radius*sin(theta));
	    glVertex3f(0.29*cos(ntheta),-0.3,radius*sin(ntheta));
		glVertex3f(0.25*cos(ntheta),-0.1,radius*sin(ntheta));
		glVertex3f(0.25*cos(theta),-0.1,radius*sin(theta));
		glVertex3f(0.25*cos(theta),-0.1,radius*sin(theta));
			glEnd(); 
}
}
void badan4(GLfloat radius,GLfloat tinggi){
GLint i;
	GLdouble theta, ntheta;
	for (i=0; i<circle_points; i++) { 

		glBegin(GL_POLYGON);
		theta=(2*PI*i/circle_points);
		ntheta=(2*PI*(i+1)/circle_points);
		glVertex3f(0.29*cos(theta),-0.3,radius*sin(theta));
	    glVertex3f(0.30*cos(ntheta),-0.4,radius*sin(ntheta));
		glVertex3f(0.29*cos(ntheta),-0.3,radius*sin(ntheta));
		glVertex3f(0.29*cos(theta),-0.3,radius*sin(theta));
		glVertex3f(0.29*cos(theta),-0.3,radius*sin(theta));
			glEnd(); 
}
}

void badan5(GLfloat radius,GLfloat tinggi){
GLint i;
	GLdouble theta, ntheta;
	for (i=0; i<circle_p; i++) { 

		glBegin(GL_POLYGON);
		theta=(2*PI*i/circle_p);
		ntheta=(2*PI*(i+1)/circle_p);
		glVertex3f(0.30*cos(theta),-0.4,radius*sin(theta));
	    glVertex3f(0.31*cos(ntheta),-0.6,radius*sin(ntheta));
		glVertex3f(0.30*cos(ntheta),-0.4,radius*sin(ntheta));
		glVertex3f(0.30*cos(theta),-0.4,radius*sin(theta));
		glVertex3f(0.30*cos(theta),-0.4,radius*sin(theta));
			glEnd(); 
}
}
void tutupalas (GLfloat radius,GLfloat tinggi)
{
 GLint i;
 GLdouble theta, ntheta;
 for(i=0; i<circle_points; i++) { 
 
 	glBegin(GL_POLYGON);
 	theta =(2*PI*i/circle_points);
 	ntheta=(2*PI*(i+1)/circle_points);
 	glVertex3f(radius*cos(theta),-0.6,radius*sin(theta));
 	glVertex3f(0,-0.65,0.2);
 	glVertex3f(radius*cos(ntheta),-0.6,radius*sin(ntheta));
 	glEnd();
 	
 }
	}

void Display(void){
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3ub(119,83,11);
	tutupalas(0.3,1);
	badan5(0.1,-0.1);
	badan4(0.1,-0.1);
	badan3(0.1,-0.1);
	badan2(0.1,-0.1);
	badan1(0.1,-0.1);
	kepala(0.08);
	leher(0.1,-0.1);
	glFlush(); 
	
}

void reshape(int w, int h){
	 glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1,1,-1.4,1,1,20);
    glMatrixMode(GL_MODELVIEW);
    glMatrixMode(GL_MODELVIEW);
    gluLookAt(0,0,5,0,0,-100,0,1,0);
	glRotatef(20,1,0,0);
}

void init(void){
	glClearColor(1,1,1,1);
	glPolygonMode(GL_FRONT, GL_LINE);
    glPolygonMode(GL_BACK, GL_LINE);
    
	
	
}

int main(int argc, char* argv[]){
	glutInit (&argc,argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutCreateWindow("RAMA");
	init ();
	glutDisplayFunc(Display);
	glutReshapeFunc(reshape); 
	glutMainLoop();
	
}
