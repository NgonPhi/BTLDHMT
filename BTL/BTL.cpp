#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void SetMaterialColor(GLfloat mat_diffuse[4]){
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0, 1.0 };
    GLfloat mat_shininess[] = { 50.0 };
	glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, mat_shininess);
}

float xspCaT = 0;
float xspKhT = 0;
float xspCoT = 0;
float xspNT = 0;
float xspD2NT = 0;
float xspNT1 = 0;
float xspD2NT1 = 0;
float xspD3NT1 = 0;
float xspNT2 = 0;
float xspD2NT2 = 0;
float xspD3NT2 = 0;
float xspNT3 = 0;
float xspD2NT3 = 0;
float xspD3NT3 = 0;
float xspNT4 = 0;
float xspD2NT4 = 0;
float xspD3NT4 = 0;

float yspCaT = 0;
float yspKhT = 0;
float yspCoT = 0;
float yspNT = 0;
float yspD2NT = 0;
float yspNT1 = 0;
float yspD2NT1 = 0;
float yspD3NT1 = 0;
float yspNT2 = 0;
float yspD2NT2 = 0;
float yspD3NT2 = 0;
float yspNT3 = 0;
float yspD2NT3 = 0;
float yspD3NT3 = 0;
float yspNT4 = 0;
float yspD2NT4 = 0;
float yspD3NT4 = 0;

float zspCaT = 0;
float zspKhT = 0;
float zspCoT = 0;
float zspNT = 0;
float zspD2NT = 0;
float zspNT1 = 0;
float zspD2NT1 = 0;
float zspD3NT1 = 0;
float zspNT2 = 0;
float zspD2NT2 = 0;
float zspD3NT2 = 0;
float zspNT3 = 0;
float zspD2NT3 = 0;
float zspD3NT3 = 0;
float zspNT4 = 0;
float zspD2NT4 = 0;
float zspD3NT4 = 0;

bool DT1 = false;

void Draw(){
	GLfloat red[] = { 1.0, 0, 0, 1.0 };
	GLfloat green[] = { 0, 1.0, 0, 1.0 };
	GLfloat blue[] = { 0, 0, 1.0, 1.0 };

	// Canh Tay
	glPushMatrix();
		glTranslatef(-3.0, 0.0, 0.0);
		
		if(DT1){
			glTranslatef(3.0, -6.0, 6.0);
			glRotatef(90, 0.0, 1.0, 0.0);
		}				
		glutSolidSphere(0.5, 64, 64);
		
		// Bap Tay
		glPushMatrix();
			SetMaterialColor(red);
			
			glTranslatef(1.5, 0.0, 0.0);
			glScalef(3.0, 1.0, 1.0);
			glutSolidCube(1.0);
		glPopMatrix();
		
		// Khuy Tay
		glPushMatrix();				
			glTranslatef(3.0, 0.0, 0.0);
			
			if(DT1){
				glRotatef(90, 0.0, 0.0, 1.0);
			}
			
			glutSolidSphere(0.5, 64, 64);
			
			// Cang Tay			
			glPushMatrix();
				SetMaterialColor(blue);
			
				glTranslatef(1.5, 0.0, 0.0);
				glScalef(3.0, 1.0, 1.0);
				glutSolidCube(1.0);
			glPopMatrix();
			
			// Co Tay
			glPushMatrix();
				glTranslatef(3, 0.0, 0.0);
				
				if(DT1){
					glRotatef(180, 1.0, 0.0, 0.0);
				}
				
				glutSolidSphere(0.5, 64, 64);
				
				// Ban Tay
				glPushMatrix();
					SetMaterialColor(green);
					
					glTranslatef(0.5, 0.0, 0.0);
					glutSolidCube(1.0);
					
					// Ngon Tay
					glPushMatrix();
						glTranslatef(0.5, -0.375, 0.375);
						
						if(DT1){
							glRotatef(-60, 0.0, 1.0, 0.0);
						}
						
						glScalef(0.25, 0.25, 0.25);
						glutSolidSphere(0.5, 64, 64);
						
						// Cube
						glPushMatrix();							
							SetMaterialColor(red);
							
							glTranslatef(1, 0.0, 0.0);
							glScalef(2, 1, 1);
							glutSolidCube(1.0);
						glPopMatrix();
						
						// Dot2
						glPushMatrix();
							glTranslatef(2, 0, 0);
							
							if(DT1){
								glRotatef(yspD2NT, 0.0, 1.0, 0.0);
							}
							
							glutSolidSphere(0.5, 64, 64);
							
							//Cube
							glPushMatrix();
								SetMaterialColor(blue);
							
								glTranslatef(1, 0.0, 0.0);
								glScalef(2, 1, 1);
								glutSolidCube(1.0);
							glPopMatrix();
						glPopMatrix();							
					glPopMatrix();
					
					// Ngon Tay 1
					glPushMatrix();
						glTranslatef(0.5, 0.375, 0.375);
						
						if(DT1){
							glRotatef(-20, 0.0, 1.0, 0.0);
						}
						
						glScalef(0.25, 0.25, 0.25);
						glutSolidSphere(0.5, 64, 64);
						
						// Cube
						glPushMatrix();						
							SetMaterialColor(red);
							
							glTranslatef(1, 0.0, 0.0);
							glScalef(2, 1, 1);
							glutSolidCube(1.0);
						glPopMatrix();
						
						// Dot2
						glPushMatrix();
							glTranslatef(2, 0, 0);
							
							if(DT1){
								glRotatef(zspD2NT1, 0.0, 0.0, 1.0);
							}
							
							glutSolidSphere(0.5, 64, 64);
							
							//Cube
							glPushMatrix();
								SetMaterialColor(blue);
								
								glTranslatef(1, 0.0, 0.0);
								glScalef(2, 1, 1);
								glutSolidCube(1.0);
							glPopMatrix();
							
							// Dot3
							glPushMatrix();
								glTranslatef(2, 0, 0);
								
								if(DT1){
									glRotatef(zspD3NT1, 0.0, 0.0, 1.0);
								}
								
								glutSolidSphere(0.5, 64, 64);
								
								//Cube
								glPushMatrix();
									SetMaterialColor(green);
									
									glTranslatef(1, 0.0, 0.0);
									glScalef(2, 1, 1);
									glutSolidCube(1.0);
								glPopMatrix();
							glPopMatrix();
						glPopMatrix();							
					glPopMatrix();
					
					// Ngon Tay 2
					glPushMatrix();
						glTranslatef(0.5, 0.375, 0.125);
						glScalef(0.25, 0.25, 0.25);
						
						if(DT1){
							glRotatef(-7.5, 0.0, 1.0, 0.0);
						}
						
						glutSolidSphere(0.5, 64, 64);
						
						// Cube
						glPushMatrix();
							SetMaterialColor(blue);
							
							glTranslatef(1, 0.0, 0.0);
							glScalef(2, 1, 1);
							glutSolidCube(1.0);
						glPopMatrix();
						
						// Dot2
						glPushMatrix();
							glTranslatef(2, 0, 0);
							
							if(DT1){
								glRotatef(zspD2NT2, 0.0, 0.0, 1.0);
							}
							
							glutSolidSphere(0.5, 64, 64);
							
							//Cube
							glPushMatrix();
								SetMaterialColor(green);
								
								glTranslatef(1, 0.0, 0.0);
								glScalef(2, 1, 1);
								glutSolidCube(1.0);
							glPopMatrix();
							
							// Dot3
							glPushMatrix();
								glTranslatef(2, 0, 0);
								
								if(DT1){
									glRotatef(zspD3NT2, 0.0, 0.0, 1.0);
								}
								
								glutSolidSphere(0.5, 64, 64);
								
								//Cube
								glPushMatrix();
									SetMaterialColor(red);
								
									glTranslatef(1, 0.0, 0.0);
									glScalef(2, 1, 1);
									glutSolidCube(1.0);
								glPopMatrix();
							glPopMatrix();
						glPopMatrix();							
					glPopMatrix();
					
					// Ngon Tay 3
					glPushMatrix();
						glTranslatef(0.5, 0.375, -0.125);
						glScalef(0.25, 0.25, 0.25);
						
						if(DT1){
							glRotatef(7.5, 0.0, 1.0, 0.0);
						}
						
						glutSolidSphere(0.5, 64, 64);
						
						// Cube
						glPushMatrix();
							SetMaterialColor(green);
							
							glTranslatef(1, 0.0, 0.0);
							glScalef(2, 1, 1);
							glutSolidCube(1.0);
						glPopMatrix();
						
						// Dot2
						glPushMatrix();
							glTranslatef(2, 0, 0);
							
							if(DT1){
								glRotatef(zspD2NT3, 0.0, 0.0, 1.0);
							}
							
							glutSolidSphere(0.5, 64, 64);
							
							//Cube
							glPushMatrix();
								SetMaterialColor(red);
								
								glTranslatef(1, 0.0, 0.0);
								glScalef(2, 1, 1);
								glutSolidCube(1.0);
							glPopMatrix();
							
							// Dot3
							glPushMatrix();
								glTranslatef(2, 0, 0);
								
								if(DT1){
									glRotatef(zspD3NT3, 0.0, 0.0, 1.0);
								}
								
								glutSolidSphere(0.5, 64, 64);
								
								//Cube
								glPushMatrix();
									SetMaterialColor(blue);
									
									glTranslatef(1, 0.0, 0.0);
									glScalef(2, 1, 1);
									glutSolidCube(1.0);
								glPopMatrix();
							glPopMatrix();
						glPopMatrix();							
					glPopMatrix();
					
					// Ngon Tay 4
					glPushMatrix();
						glTranslatef(0.5, 0.375, -0.375);
						glScalef(0.25, 0.25, 0.25);
						
						if(DT1){
							glRotatef(20, 0.0, 1.0, 0.0);
						}
						
						glutSolidSphere(0.5, 64, 64);
						
						// Cube
						glPushMatrix();
							SetMaterialColor(red);
						
							glTranslatef(1, 0.0, 0.0);
							glScalef(2, 1, 1);
							glutSolidCube(1.0);
						glPopMatrix();
						
						// Dot2
						glPushMatrix();
							glTranslatef(2, 0, 0);
							
							if(DT1){
								glRotatef(zspD2NT4, 0.0, 0.0, 1.0);
							}
							
							glutSolidSphere(0.5, 64, 64);
							
							//Cube
							glPushMatrix();
								SetMaterialColor(blue);
							
								glTranslatef(1, 0.0, 0.0);
								glScalef(2, 1, 1);
								glutSolidCube(1.0);
							glPopMatrix();
							
							// Dot3
							glPushMatrix();
								glTranslatef(2, 0, 0);
								
								if(DT1){
									glRotatef(zspD3NT4, 0.0, 0.0, 1.0);
								}
								
								glutSolidSphere(0.5, 64, 64);
								
								//Cube
								glPushMatrix();
									SetMaterialColor(green);
								
									glTranslatef(1, 0.0, 0.0);
									glScalef(2, 1, 1);
									glutSolidCube(1.0);
								glPopMatrix();
							glPopMatrix();
						glPopMatrix();							
					glPopMatrix();
										
				glPopMatrix();
			glPopMatrix();
		glPopMatrix();
	glPopMatrix();
}

void display(void){
	glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity ();
	gluLookAt (0.0, 0.0, 6.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
	Draw();
	
	glFlush ();
}
void reshape (int w, int h){
	glViewport (0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	glFrustum (-2.5, 2.5, -2.5, 2.5, 1.5, 50.0);
	glMatrixMode (GL_MODELVIEW);
}

void init(void){	
	// Error
    GLfloat light_position[] = { 0.0, 20.0, 20.0, 0.0 };
	
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_SMOOTH);

    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

void keyboard(unsigned char key, int x, int y){
	if(key == '.'){
		DT1 = true;
		glutPostRedisplay();
	}
	if(key == '0'){
		DT1 = false;
		glutPostRedisplay();
	}
	if(key == '1'){
		yspD2NT += 2;
		zspD2NT1 -= 1;
		zspD2NT2 -= 1;
		zspD2NT3 -= 1;
		zspD2NT4 -= 1;
		zspD3NT1 -= 2;
		zspD3NT2 -= 2;
		zspD3NT3 -= 2;
		zspD3NT4 -= 2;
		glutPostRedisplay();
	}
	if(key == '3'){
		yspD2NT -= 2;
		zspD2NT1 += 1;
		zspD2NT2 += 1;
		zspD2NT3 += 1;
		zspD2NT4 += 1;
		zspD3NT1 += 2;
		zspD3NT2 += 2;
		zspD3NT3 += 2;
		zspD3NT4 += 2;
		glutPostRedisplay();
	}
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize (600, 600);
	glutInitWindowPosition (100, 100);
	glutCreateWindow (argv[0]);
	init ();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}

