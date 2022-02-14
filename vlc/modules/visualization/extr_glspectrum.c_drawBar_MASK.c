
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float GLfloat ;


 int VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,float const*) ;
 int FUNC_2 (int,int ,int ,float const*) ;

__attribute__((used)) static void FUNC_3(void)
{
    const float VAR_4 = VAR_3 / VAR_2 - 0.05f;

    const GLfloat VAR_5[] = {
        0.f, 0.f, 0.f, VAR_4, 0.f, 0.f, 0.f, 1.f, 0.f,
        0.f, 1.f, 0.f, VAR_4, 0.f, 0.f, VAR_4, 1.f, 0.f,

        0.f, 0.f, -VAR_4, 0.f, 0.f, 0.f, 0.f, 1.f, -VAR_4,
        0.f, 1.f, -VAR_4, 0.f, 0.f, 0.f, 0.f, 1.f, 0.f,

          VAR_4, 0.f, 0.f, VAR_4, 0.f, -VAR_4, VAR_4, 1.f, 0.f,
          VAR_4, 1.f, 0.f, VAR_4, 0.f, -VAR_4, VAR_4, 1.f, -VAR_4,

          VAR_4, 0.f, -VAR_4, 0.f, 0.f, -VAR_4, 0.f, 1.f, -VAR_4,
        0.f, 1.f, -VAR_4, VAR_4, 1.f, -VAR_4, VAR_4, 0.f, -VAR_4,

        0.f, 1.f, 0.f, VAR_4, 1.f, 0.f, VAR_4, 1.f, -VAR_4,
        0.f, 1.f, 0.f, VAR_4, 1.f, -VAR_4, 0.f, 1.f, -VAR_4,
    };

    const GLfloat VAR_6[] = {
        0.f, 0.f, 1.f, 0.f, 0.f, 1.f, 0.f, 0.f, 1.f,
        0.f, 0.f, 1.f, 0.f, 0.f, 1.f, 0.f, 0.f, 1.f,

        -1.f, 0.f, 0.f, -1.f, 0.f, 0.f, -1.f, 0.f, 0.f,
        -1.f, 0.f, 0.f, -1.f, 0.f, 0.f, -1.f, 0.f, 0.f,

        1.f, 0.f, 0.f, 1.f, 0.f, 0.f, 1.f, 0.f, 0.f,
        1.f, 0.f, 0.f, 1.f, 0.f, 0.f, 1.f, 0.f, 0.f,

        0.f, 0.f, -1.f, 0.f, 0.f, -1.f, 0.f, 0.f, -1.f,
        0.f, 0.f, -1.f, 0.f, 0.f, -1.f, 0.f, 0.f, -1.f,

        0.f, 1.f, 0.f, 0.f, 1.f, 0.f, 0.f, 1.f, 0.f,
        0.f, 1.f, 0.f, 0.f, 1.f, 0.f, 0.f, 1.f, 0.f,
    };

    FUNC_2(3, VAR_0, 0, VAR_5);
    FUNC_1(VAR_0, 0, VAR_6);
    FUNC_0(VAR_1, 0, 6 * 5);
}
