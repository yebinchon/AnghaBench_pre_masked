
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLuint ;
typedef int GLint ;
typedef int GLenum ;
typedef char GLchar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int,int *,char*) ;
 int FUNC_5 (scalar_t__,int ,int*) ;
 int FUNC_6 (scalar_t__,int,char const**,int *) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static GLuint FUNC_9(GLenum const VAR_2, const GLchar* VAR_3) {
 GLuint VAR_4 = FUNC_2(VAR_2);
 if (VAR_4) {
  FUNC_6 (VAR_4, 1, &VAR_3, ((void*)0));
  FUNC_1(VAR_4);
  GLint VAR_5;
  FUNC_5(VAR_4, VAR_0, &VAR_5);
  if (VAR_5) {
   return VAR_4;
  } else {
   GLint VAR_6;
   FUNC_5(VAR_4, VAR_1, &VAR_6);
   if (VAR_6 > 1) {
    GLchar* VAR_7 = FUNC_7(VAR_6);
    FUNC_4(VAR_4, VAR_6, ((void*)0), VAR_7);

    FUNC_8("Shader compilation error: %s\n", VAR_7);

    FUNC_0(VAR_7);
   }
   FUNC_3(VAR_4);
  }
 }
 return 0;
}
