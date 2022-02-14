
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {int dummy; } ;
typedef int io_read_fn ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct io*,char const*,int ,void*) ;
 int FUNC_2 (struct io*,int ,int *,int *,char const**) ;

enum status_code
FUNC_3(const char **VAR_1, const char *VAR_2,
     io_read_fn VAR_3, void *VAR_4)
{
 struct io VAR_5;

 if (!FUNC_2(&VAR_5, VAR_0, ((void*)0), ((void*)0), VAR_1))
  return FUNC_0("Failed to open IO");
 return FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4);
}
