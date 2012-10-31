/*
Hello_GLUT_world.cpp
	請見本檔案的header檔案以得到更多關於本檔案的說明
*/
/*||||| 程式所include之函式庫的標頭檔 | Included Library Headers |||||*/
/* Standard C Library Definitions */
	#include <iostream>
	#include <cstdio>
		/* for standard I/O functions */
	#include <cstdlib>
		/* for EXIT_* macro */

/* GLUT Library Definitions */
	#include <GL/glut.h>

/* Vdragon's C Libraries */
	#include "Show_software_info/Show_software_info.h"
	#include "pauseProgram/Pause_program.h"
	#include "Project_specific_configurations/Software_info.h"
/*||||| 常數與巨集 | Constants & Macros |||||*/

/*||||| Definition of data type, enumeration, data structure and class |||||*/

/*||||| 函式雛型 | Function Prototypes |||||*/
/* callback functions */
	void cbKeyboard(unsigned char key, int x, int y);
	void cbMouse(int button, int state, int x, int y);
/*||||| 全域變數 | Global Variables |||||*/

/*||||| 主要程式碼 | Main Code |||||*/
int main(int argc, char *argv[]){

	show_software_info(__FILE__);
restart_program:

	/* GLUT initialization ? */
	glutInit(&argc, argv);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(640,360);
	glutInitDisplayMode(GLUT_RGBA);
	glutCreateWindow(SOFTWARE_NAME);
		/* TODO: this returns an unknown Window ID */

	/* Register callback functions */
	glutKeyboardFunc(cbKeyboard);
	glutMouseFunc(cbMouse);

	/* Enter main loop */
	glutMainLoop();

	if(pauseProgram() == 1){
		goto restart_program;
	}
	return EXIT_SUCCESS;
}

void cbKeyboard(unsigned char key, int x, int y){
	/* make q key default to exit program */
	if(key == 'q' || key == 'Q'){
		std::cout << "Exiting program." << std::endl;
		exit(0);
	}
	return;
}

void cbMouse(int button, int state, int x, int y){

	return;
}
