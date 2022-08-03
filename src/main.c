#include <stdio.h>
#include <memory.h>

#define RED    1 
#define WHITE  2
#define BLUE   3
#define YELLOW 4
#define GREEN  5
#define ORANGE 6

struct cube_face
{
    short int (*face)[3];
    short int (*right_face)[3];
    short int (*left_face)[3];
    short int (*top_face)[3];
    short int (*bottom_face)[3];
    short int (*back_face)[3];
    short int offset;
};

struct rubix_cube 
{
    struct cube_face cf_front;
    struct cube_face cf_red;
    struct cube_face cf_white;
    struct cube_face cf_blue;
    struct cube_face cf_yellow;
    struct cube_face cf_green;
    struct cube_face cf_orange;
};

static struct rubix_cube g_cube; // global cube.


// rotate left front face.
static void r_left_f_face()
{

}

// rotate right front face.
static void r_right_f_face()
{

}

// rotate left back face.
static void r_left_b_face()
{

}

// rotate right back face.
static void r_right_b_face()
{

}

// rotate left up face.
static void r_left_u_face()
{

}

// rotate right up face.
static void r_right_u_face()
{

}

// rotate left down face.
static void r_left_d_face()
{

}

// rotate right down face.
static void r_right_d_face()
{

}

// move up left column.
static void m_up_left_column()
{

}

// move down left column.
static void m_down_left_column()
{

}

// move up right column.
static void m_up_right_column()
{

}

// move down right column.
static void m_down_right_column()
{

}

// TODO - make a few random moves to suffle the virtual cube. 
static void suffle_cube()
{

}

static void solve_cube()
{

}

int main(int argc, char *argv[])
{
    // make each face initial value.
    short int v_red_face[3][3] = {
        {RED, RED, RED},
        {RED, RED, RED},
        {RED, RED, RED}
    };

    short int v_white_face[3][3] = {
        {WHITE, WHITE, WHITE},
        {WHITE, WHITE, WHITE},
        {WHITE, WHITE, WHITE}
    };

    short int v_blue_face[3][3] = {
        {BLUE, BLUE, BLUE},
        {BLUE, BLUE, BLUE},
        {BLUE, BLUE, BLUE}
    };

    short int v_yellow_face[3][3] = {
        {YELLOW, YELLOW, YELLOW},
        {YELLOW, YELLOW, YELLOW},
        {YELLOW, YELLOW, YELLOW}
    };

    short int v_green_face[3][3] = {
        {GREEN, GREEN, GREEN},
        {GREEN, GREEN, GREEN},
        {GREEN, GREEN, GREEN}
    };

    short int v_orange_face[3][3] = {
        {ORANGE, ORANGE, ORANGE},
        {ORANGE, ORANGE, ORANGE},
        {ORANGE, ORANGE, ORANGE}
    };


    // configure cube faces.
    g_cube.cf_red.face           = v_red_face;
    g_cube.cf_white.face         = v_white_face;
    g_cube.cf_blue.face          = v_blue_face;
    g_cube.cf_yellow.face        = v_yellow_face;
    g_cube.cf_green.face         = v_green_face;
    g_cube.cf_orange.face        = v_orange_face;
    // configure right, left, bottom and top faces.
    // red face.
    g_cube.cf_red.left_face      = v_blue_face;
    g_cube.cf_red.right_face     = v_green_face;
    g_cube.cf_red.top_face       = v_yellow_face;
    g_cube.cf_red.bottom_face    = v_white_face;
    g_cube.cf_red.back_face      = v_orange_face;
    // white face.
    g_cube.cf_white.left_face    = v_blue_face;
    g_cube.cf_white.right_face   = v_green_face;
    g_cube.cf_white.top_face     = v_red_face;
    g_cube.cf_white.bottom_face  = v_orange_face;
    g_cube.cf_white.back_face    = v_yellow_face;
    // blue face.
    g_cube.cf_blue.left_face     = v_orange_face;
    g_cube.cf_blue.right_face    = v_red_face;
    g_cube.cf_blue.top_face      = v_yellow_face;
    g_cube.cf_blue.bottom_face   = v_white_face;
    g_cube.cf_blue.back_face     = v_green_face;
    // yellow face.
    g_cube.cf_yellow.left_face   = v_blue_face;
    g_cube.cf_yellow.right_face  = v_green_face;
    g_cube.cf_yellow.top_face    = v_orange_face;
    g_cube.cf_yellow.bottom_face = v_red_face;
    g_cube.cf_yellow.back_face   = v_white_face;
    // green face.
    g_cube.cf_green.left_face    = v_red_face;
    g_cube.cf_green.right_face   = v_orange_face;
    g_cube.cf_green.top_face     = v_yellow_face;
    g_cube.cf_green.bottom_face  = v_white_face;
    g_cube.cf_green.back_face    = v_blue_face;
    // orange face.
    g_cube.cf_orange.left_face   = v_green_face;
    g_cube.cf_orange.right_face  = v_blue_face;
    g_cube.cf_orange.top_face    = v_yellow_face;
    g_cube.cf_orange.bottom_face = v_white_face;
    g_cube.cf_orange.back_face   = v_red_face;
    // initial front face.
    g_cube.cf_front              = g_cube.cf_white;

    // suffle cube.
    suffle_cube();

    // solve cube.
    solve_cube();
}
