
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int dummy; } ;
struct buffer {char* data; } ;
typedef int (* io_read_fn ) (char*,size_t,char*,size_t,void*) ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct io*) ;
 scalar_t__ FUNC_2 (struct io*) ;
 scalar_t__ FUNC_3 (struct io*,struct buffer*,char,size_t*,int,char) ;
 int FUNC_4 (struct io*) ;
 size_t FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char*) ;
 size_t FUNC_7 (char*) ;

__attribute__((used)) static enum status_code
FUNC_8(struct io *VAR_1, const char *VAR_2,
      size_t *VAR_3, io_read_fn VAR_4, void *VAR_5)
{
 struct buffer VAR_6;
 enum status_code VAR_7 = VAR_0;

 while (VAR_7 == VAR_0 && FUNC_3(VAR_1, &VAR_6, '\n', VAR_3, 1, '\\')) {
  char *VAR_8;
  char *VAR_9;
  size_t VAR_10;
  size_t VAR_11;

  VAR_8 = FUNC_6(VAR_6.data);
  VAR_10 = FUNC_5(VAR_8, VAR_2);

  if (VAR_8[VAR_10]) {
   VAR_8[VAR_10] = 0;
   VAR_9 = FUNC_6(VAR_8 + VAR_10 + 1);
   VAR_11 = FUNC_7(VAR_9);

  } else {
   VAR_9 = "";
   VAR_11 = 0;
  }

  VAR_7 = VAR_4(VAR_8, VAR_10, VAR_9, VAR_11, VAR_5);
 }

 if (VAR_7 == VAR_0 && FUNC_2(VAR_1))
  VAR_7 = FUNC_0("%s", FUNC_4(VAR_1));
 FUNC_1(VAR_1);

 return VAR_7;
}
