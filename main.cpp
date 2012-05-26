/* 

Tugas Grafika Komputer
Judul : Becak 3D revisi dari Mobil 3D

Kelas IF 10
Kelompok 5 :
Aditia Purbo Aji(10108598) - gibalomen
Deni Suwandi(10108509) - denzhu
Rizky Aswin Amvani (10108483) - rizkyaswin

Tombol : Key 'z' dan 'y' untuk rotasi

*/
#include <stdlib.h>
#include <windows.h>
#include <GL/glut.h>


static float ypoz = 0, zpoz = 0;



void init(void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glShadeModel (GL_SMOOTH);
    
    
/*
//lighting
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat mat_shininess[] = { 50.0 };
   GLfloat light_position[] = { -10.0, 9.0, 0.0, 0.0 };
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_SMOOTH);

 
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
   glEnable(GL_DEPTH_TEST);
*/
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
GLfloat light_position[] = { -10.0, 9.0, 0.0, 0.0 };
GLfloat cyan[] = {0.f, .3f, .1f, 1.f};
glMaterialfv(GL_FRONT, GL_DIFFUSE, cyan);


}

void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity ();


    glTranslatef(0,0,-6);
    // rotation (0..360)
    glRotatef(ypoz,0,1,0);
    glRotatef(zpoz,0,0,1);

//body kanan
    glPushMatrix();
	glTranslatef(0.5,-1.1,2.1);
	glScalef(1.0,0.8,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  
    
    glPushMatrix();
	glTranslatef(1.10,-1.28,2.1);
	glScalef(0.5,0.44,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  

    glPushMatrix();
	glTranslatef(1.0,-1.06,2.1);
	glRotatef(45,0,0,1);
	glScalef(0.5,0.5,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  


//body kiri
    glPushMatrix();
	glTranslatef(0.5,-1.1,1.1);
	glScalef(1.0,0.8,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  
    
    glPushMatrix();
	glTranslatef(1.10,-1.28,1.1);
	glScalef(0.5,0.44,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  

    glPushMatrix();
	glTranslatef(1.0,-1.06,1.1);
	glRotatef(45,0,0,1);
	glScalef(0.5,0.5,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  
    
//tiang kanan
    glPushMatrix();
	glTranslatef(0.5,-0.7,2.1);
	glScalef(0.05,1.0,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  
    
    glPushMatrix();
	glTranslatef(0.5,-0.7,2.1);
	glRotatef(45,0,0,1);
	glScalef(0.05,1.0,0.05);
	glutSolidCube(1.0);
    glPopMatrix(); 
    
    glPushMatrix();
	glTranslatef(0.6,-0.55,2.1);
	glRotatef(-45,0,0,1);
	glScalef(0.05,1.0,0.05);
	glutSolidCube(1.0);
    glPopMatrix(); 
    
//tiang kiri
    glPushMatrix();
	glTranslatef(0.5,-0.7,1.1);
	glScalef(0.05,1.0,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  
    
    glPushMatrix();
	glTranslatef(0.5,-0.7,1.1);
	glRotatef(45,0,0,1);
	glScalef(0.05,1.0,0.05);
	glutSolidCube(1.0);
    glPopMatrix(); 
    
    glPushMatrix();
	glTranslatef(0.6,-0.55,1.1);
	glRotatef(-45,0,0,1);
	glScalef(0.05,1.0,0.05);
	glutSolidCube(1.0);
    glPopMatrix(); 

//body belakang
    glPushMatrix();
	glTranslatef(0.0,-1.1,1.6);
	glScalef(0.05,0.8,1.0);
	glutSolidCube(1.0);
    glPopMatrix();  

//atap
    glPushMatrix();
	glTranslatef(0.9,-0.2,1.6);
	glScalef(0.8,0.05,1.1);
	glutSolidCube(1.0);
    glPopMatrix();  
    
    glPushMatrix();
	glTranslatef(0.32,-0.28,1.6);
	glRotatef(27,0,0,1);
	glScalef(0.38,0.05,1.1);
	glutSolidCube(1.0);
    glPopMatrix();  

//kursi
    glPushMatrix();
	glTranslatef(0.5,-1.28,1.6);
	glScalef(0.85,0.5,1.0);
	glutSolidCube(1.0);
    glPopMatrix();  

//roda
    glPushMatrix();
	glTranslatef(0.7,-1.3,2.2);
	glScalef(1.0,1.0,1.0);
	glutSolidTorus(0.05,0.3,20,20);
    glPopMatrix(); 
    
    glPushMatrix();
	glTranslatef(0.7,-1.3,1.05);
	glScalef(1.0,1.0,1.0);
	glutSolidTorus(0.05,0.3,20,20);
    glPopMatrix(); 
    
    glPushMatrix();
	glTranslatef(-1.0,-1.3,1.6);
	glScalef(1.0,1.0,1.0);
	glutSolidTorus(0.05,0.3,20,20);
    glPopMatrix(); 
    
    
  //tail kiri
    glPushMatrix();
	glTranslatef(-0.6,-1.0,1.5);
	glRotatef(-65,0,0,1);
	glScalef(0.05,1.2,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  
    
    glPushMatrix();
	glTranslatef(-0.5,-1.24,1.5);
	glRotatef(-90,0,0,1);
	glScalef(0.05,1.2,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  
    
    //tail kanan
    
    glPushMatrix();
	glTranslatef(-0.6,-1.0,1.7);
	glRotatef(-65,0,0,1);
	glScalef(0.05,1.2,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  
    
    glPushMatrix();
	glTranslatef(-0.5,-1.24,1.7);
	glRotatef(-90,0,0,1);
	glScalef(0.05,1.2,0.05);
	glutSolidCube(1.0);
    glPopMatrix();  
    
    glPushMatrix();
	glTranslatef(-0.2,-1.0,1.7);
	glRotatef(55,0,0,1);
	glScalef(0.05,1.2,0.05);
	glutSolidCube(1.0);
    glPopMatrix(); 
    
    glPushMatrix();
	glTranslatef(-0.65,-0.65,1.7);

	glScalef(1.1,0.2,0.5);
	glutSolidSphere(0.2,20,20);
    glPopMatrix(); 
    
    

    
    
    Sleep(5);
    glutSwapBuffers();



}

void reshape (int w, int h)
{

    glViewport (0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluPerspective(60.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
    glMatrixMode (GL_MODELVIEW);

}

void keyboard(unsigned char key, int x, int y)
{

    switch (key) {

        case 27: //exit:ESC key

            exit(0);
            break;

        // rotation y key.
        case 'y':

            ypoz=ypoz+5;
            if (ypoz>360) ypoz=0;
            glutPostRedisplay();
            break;
        // rotation z key.
        case 'z':

            zpoz = zpoz+5;
            if (zpoz>360) zpoz=0;
            glutPostRedisplay();
            break;


    }

}


void animate()
{

    // increment  rotation,  over 360  back  0
    ypoz+=0.5;
    if (ypoz>360) ypoz=0;

 
    glutPostRedisplay();

}

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
	glutCreateWindow("Becak 3D - kelompok 5");
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    glutIdleFunc(animate);

    glutMainLoop();
    return 0;

} 

