
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Image {scalar_t__ path; } ;


 int FUNC_0 (struct Image const*) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;

__attribute__((used)) static inline bool FUNC_2(const struct Image *VAR_0) {
        FUNC_0(VAR_0);

        return VAR_0->path && FUNC_1(VAR_0->path, "/usr");
}
