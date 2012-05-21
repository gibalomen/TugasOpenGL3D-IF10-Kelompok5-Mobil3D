/* 

Tugas Grafika Komputer
Judul : Mobil 3D

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

void SetMaterial(GLfloat spec[], GLfloat amb[], GLfloat diff[], GLfloat shin[]);
//material definitions



GLfloat mat_specularWHITE[] ={255.0,255.0,255.0,1.0};
GLfloat mat_ambientWHITE[] ={255.0,255.0,255.0,1.0};
GLfloat mat_diffuseWHITE[] ={255.0,255.0,255.0,1.0};
GLfloat mat_shininessWHITE[] ={128.0 * 0.4};

GLfloat mat_specularGRAY[] ={0.75,0.75,0.75,1.0};
GLfloat mat_ambientGRAY[] ={0.5,0.5,0.5,1.0};
GLfloat mat_diffuseGRAY[] ={0.50,0.50,0.50,1.0};
GLfloat mat_shininessGRAY[] ={128.0 * 0.6};

GLfloat mat_specularBLUE[] ={0.75,0.75,0.75,1.0};
GLfloat mat_ambientBLUE[] ={0,0,1,1.0};
GLfloat mat_diffuseBLUE[] ={0.50,0.50,0.50,1.0};
GLfloat mat_shininessBLUE[] ={128.0 };

GLfloat mat_specularGREEN[] ={0.633, 0.727811, 0.633,1.0};
GLfloat mat_ambientGREEN[] ={0.0215, 0.1745, 0.0215,1.0};
GLfloat mat_diffuseGREEN[] ={0.07568, 0.61424, 0.07568,1.0};
GLfloat mat_shininessGREEN[] ={128.0};

GLfloat mat_specularYELLOW[] ={0.75,0.75,0.75,1.0};
GLfloat mat_ambientYELLOW[] ={1,1,0,1.0};
GLfloat mat_diffuseYELLOW[] ={0.50,0.50,0.50,1.0};
GLfloat mat_shininessYELLOW[] ={128.0};

GLfloat mat_specularRED[] ={0.75,0.75,0.75,1.0};
GLfloat mat_ambientRED[] ={1.0,0.0,0.0,1.0};
GLfloat mat_diffuseRED[] ={0.50,0.50,0.50,1.0};
GLfloat mat_shininessRED[] ={128.0};


void SetMaterial(GLfloat spec[], GLfloat amb[], GLfloat diff[], GLfloat shin[])
{

  glMaterialfv(GL_FRONT, GL_SPECULAR, spec);
  glMaterialfv(GL_FRONT, GL_SHININESS, shin);
  glMaterialfv(GL_FRONT, GL_AMBIENT, amb);
  glMaterialfv(GL_FRONT, GL_DIFFUSE, diff);
}







static float ypoz = 0, zpoz = 0;



void init(void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glShadeModel (GL_SMOOTH);
//lighting
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat mat_shininess[] = { 50.0 };
   GLfloat light_position[] = { -10.0, 9.0, 0.0, 0.0 };
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_SMOOTH);

   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
   glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);

   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
   glEnable(GL_DEPTH_TEST);
}

void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity ();


    glTranslatef(0,0,-6);
    // rotation (0..360)
    glRotatef(ypoz,0,1,0);
    glRotatef(zpoz,0,0,1);



//roda kiri
    glPushMatrix();
	glTranslatef(0.0,-1.2,1.6);
	glScalef(1.1,1.1,1.1);
	SetMaterial(mat_specularGRAY, mat_ambientGRAY, mat_diffuseGRAY, mat_shininessGRAY);
	glutSolidTorus(0.13,0.13,22,22);
    glPopMatrix();       
    
    glPushMatrix();
	glTranslatef(1.0,-1.2,1.6);
	glScalef(1.1,1.1,1.1);
	SetMaterial(mat_specularGRAY, mat_ambientGRAY, mat_diffuseGRAY, mat_shininessGRAY);
	glutSolidTorus(0.13,0.13,22,22);
    glPopMatrix(); 
        
//roda kanan 
    glPushMatrix();
	glTranslatef(1.0,-1.2,2.6);
	glScalef(1.1,1.1,1.1);
	SetMaterial(mat_specularGRAY, mat_ambientGRAY, mat_diffuseGRAY, mat_shininessGRAY);
	glutSolidTorus(0.13,0.13,22,22);
    glPopMatrix();       
    
    glPushMatrix();
	glTranslatef(0.0,-1.2,2.6);
	glScalef(1.1,1.1,1.1);
	SetMaterial(mat_specularGRAY, mat_ambientGRAY, mat_diffuseGRAY, mat_shininessGRAY);
	glutSolidTorus(0.13,0.13,22,22);
    glPopMatrix();    

//body
    glPushMatrix();
	glTranslatef(0.5,-1.1,2.1);
	glScalef(1.9,0.5,0.9);
	SetMaterial(mat_specularYELLOW, mat_ambientYELLOW, mat_diffuseYELLOW, mat_shininessYELLOW);
	glutSolidCube(1.0);
    glPopMatrix();  

//atap
    glPushMatrix();
	glTranslatef(0.35,-0.8,2.1);
	glScalef(0.9,0.5,0.9);
	SetMaterial(mat_specularYELLOW, mat_ambientYELLOW, mat_diffuseYELLOW, mat_shininessYELLOW);
	glutSolidCube(1.0);
    glPopMatrix(); 
 
 //kaca
    glPushMatrix();
	glTranslatef(0.8,-0.9,2.1);
	glRotatef(45,0,0,1);
	glScalef(0.5,0.5,0.9);
	SetMaterial(mat_specularYELLOW, mat_ambientYELLOW, mat_diffuseYELLOW, mat_shininessYELLOW);
	glutSolidCube(1.0);
    glPopMatrix(); 
 
//wing

    glPushMatrix();
	glTranslatef(-0.29,-0.8,2.1);
//	glRotatef(-10,0,0,1);
	glScalef(0.2,0.05,0.9);
	SetMaterial(mat_specularYELLOW, mat_ambientYELLOW, mat_diffuseYELLOW, mat_shininessYELLOW);
	glutSolidCube(1.0);
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
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
	glutCreateWindow("Mobil 3D - kelompok 5");
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    glutIdleFunc(animate);

    glutMainLoop();
    return 0;

} 
