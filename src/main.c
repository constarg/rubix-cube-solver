#include <stdio.h>

#define RED    1 
#define WHITE  2
#define BLUE   3
#define YELLOW 4
#define GREEN  5
#define ORANGE 6

struct cube_face
{
    short int *face;
    short int *right_face;
    short int *left_face;
    short int *top_face;
    short int *bottom_face;
    short int *back_face;
    char color[10];
};

struct rubix_cube 
{
    struct cube_face f_red;
    struct cube_face f_white;
    struct cube_face f_blue;
    struct cube_face f_yellow;
    struct cube_face f_green;
    struct cube_face f_orange;
};

// make each face initial value.
short int v_red_face[] = {
    RED, RED, RED,
    RED, RED, RED,
    RED, RED, RED
};

short int v_white_face[] = {
    WHITE, WHITE, WHITE,
    WHITE, WHITE, WHITE,
    WHITE, WHITE, WHITE
};

short int v_blue_face[] = {
    BLUE, BLUE, BLUE,
    BLUE, BLUE, BLUE,
    BLUE, BLUE, BLUE
};

short int v_yellow_face[] = {
    YELLOW, YELLOW, YELLOW,
    YELLOW, YELLOW, YELLOW,
    YELLOW, YELLOW, YELLOW
};

short int v_green_face[] = {
    GREEN, GREEN, GREEN,
    GREEN, GREEN, GREEN,
    GREEN, GREEN, GREEN
};

short int v_orange_face[] = {
    ORANGE, ORANGE, ORANGE,
    ORANGE, ORANGE, ORANGE,
    ORANGE, ORANGE, ORANGE
};

static void r_up_f_face()
{

}

static void r_down_f_face()
{

}


// TODO - do all the rotations.
static void suffle_cute(const struct rubix_cube *cube)
{

}

int main(int argc, char *argv[])
{
    // configure cube.
    struct rubix_cube cube;

    // configure cube faces.
    cube.f_red.face    = v_red_face;
    cube.f_white.face  = v_white_face;
    cube.f_blue.face   = v_blue_face;
    cube.f_yellow.face = v_yellow_face;
    cube.f_green.face  = v_green_face;
    cube.f_orange.face = v_orange_face;
    // configure right, left, bottom and top faces.
    // red face.
    cube.f_red.left_face   = v_blue_face;
    cube.f_red.right_face  = v_green_face;
    cube.f_red.top_face    = v_yellow_face;
    cube.f_red.bottom_face = v_white_face;
    cube.f_red.back_face   = v_orange_face;
    // white face.
    cube.f_white.left_face   = v_blue_face;
    cube.f_white.right_face  = v_green_face;
    cube.f_white.top_face    = v_red_face;
    cube.f_white.bottom_face = v_orange_face;
    cube.f_white.back_face   = v_yellow_face;
    // blue face.
    cube.f_blue.left_face   = v_orange_face;
    cube.f_blue.right_face  = v_red_face;
    cube.f_blue.top_face    = v_yellow_face;
    cube.f_blue.bottom_face = v_white_face;
    cube.f_blue.back_face   = v_green_face;
    // yellow face.
    cube.f_yellow.left_face   = v_blue_face;
    cube.f_yellow.right_face  = v_green_face;
    cube.f_yellow.top_face    = v_orange_face;
    cube.f_yellow.bottom_face = v_red_face;
    cube.f_yellow.back_face   = v_white_face;
    // green face.
    cube.f_green.left_face   = v_red_face;
    cube.f_green.right_face  = v_orange_face;
    cube.f_green.top_face    = v_yellow_face;
    cube.f_green.bottom_face = v_white_face;
    cube.f_green.back_face   = v_blue_face;
    // orange face.
    cube.f_orange.left_face   = v_green_face;
    cube.f_orange.right_face  = v_blue_face;
    cube.f_orange.top_face    = v_yellow_face;
    cube.f_orange.bottom_face = v_white_face;
    cube.f_orange.back_face   = v_red_face;
}
