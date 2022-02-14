
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Image {char* name; } ;


 int FUNC_0 (struct Image const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct Image *VAR_0) {
        FUNC_0(VAR_0);

        return VAR_0->name && VAR_0->name[0] == '.';
}
