#pragma once

#define offsetof(s, m) __builtin_offsetof(s, m)


#define typeof(name) decltype(name)


#define HoboBreak() MessageBoxA(0, "break1", 0, 0); MessageBoxA(0, "break2", 0, 0)


#define FUNCTION_NAME __FUNCTION__
#define DECORATED_FUNCTION_NAME __FUNCDNAME__







#define for_each(name, start, end) for (size_t name = start; name < end; name++)
#define for_all(name, end) for_each(name, 0, end)







#define LogFunction(...) LogFunctionHelper(FUNC_NAME __VA_OPT__(,) __VA_ARGS__)

#define DebugLog(...) if constexpr (debug) { Log(__VA_ARGS__); }

#define DebugLogFunction(...) if constexpr (debug) { LogFunctionHelper(FUNC_NAME __VA_OPT__(,) __VA_ARGS__); }






#define _Prep_Merge(a, b) a##b
#define Prep_Merge(a, b) _Prep_Merge(a, b)

#define _Prep_String(a) #a
#define Prep_String(a) _Prep_String(a)








#define mov_eax_eax   0x8B, 0xC0       // mov eax,eax
#define mov_eax_ecx   0x8B, 0xC1       // mov eax,ecx
#define mov_eax_edx   0x8B, 0xC2       // mov eax,edx
#define mov_eax_ebx   0x8B, 0xC3       // mov eax,ebx
#define mov_eax_esp   0x8B, 0xC4       // mov eax,esp
#define mov_eax_ebp   0x8B, 0xC5       // mov eax,ebp
#define mov_eax_esi   0x8B, 0xC6       // mov eax,esi
#define mov_eax_edi   0x8B, 0xC7       // mov eax,edi
#define mov_eax_r8d   0x41, 0x8B, 0xC0 // mov eax,r8d
#define mov_eax_r9d   0x41, 0x8B, 0xC1 // mov eax,r9d
#define mov_eax_r10d  0x41, 0x8B, 0xC2 // mov eax,r10d
#define mov_eax_r11d  0x41, 0x8B, 0xC3 // mov eax,r11d
#define mov_eax_r12d  0x41, 0x8B, 0xC4 // mov eax,r12d
#define mov_eax_r13d  0x41, 0x8B, 0xC5 // mov eax,r13d
#define mov_eax_r14d  0x41, 0x8B, 0xC6 // mov eax,r14d
#define mov_eax_r15d  0x41, 0x8B, 0xC7 // mov eax,r15d
#define mov_ecx_eax   0x8B, 0xC8       // mov ecx,eax
#define mov_ecx_ecx   0x8B, 0xC9       // mov ecx,ecx
#define mov_ecx_edx   0x8B, 0xCA       // mov ecx,edx
#define mov_ecx_ebx   0x8B, 0xCB       // mov ecx,ebx
#define mov_ecx_esp   0x8B, 0xCC       // mov ecx,esp
#define mov_ecx_ebp   0x8B, 0xCD       // mov ecx,ebp
#define mov_ecx_esi   0x8B, 0xCE       // mov ecx,esi
#define mov_ecx_edi   0x8B, 0xCF       // mov ecx,edi
#define mov_ecx_r8d   0x41, 0x8B, 0xC8 // mov ecx,r8d
#define mov_ecx_r9d   0x41, 0x8B, 0xC9 // mov ecx,r9d
#define mov_ecx_r10d  0x41, 0x8B, 0xCA // mov ecx,r10d
#define mov_ecx_r11d  0x41, 0x8B, 0xCB // mov ecx,r11d
#define mov_ecx_r12d  0x41, 0x8B, 0xCC // mov ecx,r12d
#define mov_ecx_r13d  0x41, 0x8B, 0xCD // mov ecx,r13d
#define mov_ecx_r14d  0x41, 0x8B, 0xCE // mov ecx,r14d
#define mov_ecx_r15d  0x41, 0x8B, 0xCF // mov ecx,r15d
#define mov_edx_eax   0x8B, 0xD0       // mov edx,eax
#define mov_edx_ecx   0x8B, 0xD1       // mov edx,ecx
#define mov_edx_edx   0x8B, 0xD2       // mov edx,edx
#define mov_edx_ebx   0x8B, 0xD3       // mov edx,ebx
#define mov_edx_esp   0x8B, 0xD4       // mov edx,esp
#define mov_edx_ebp   0x8B, 0xD5       // mov edx,ebp
#define mov_edx_esi   0x8B, 0xD6       // mov edx,esi
#define mov_edx_edi   0x8B, 0xD7       // mov edx,edi
#define mov_edx_r8d   0x41, 0x8B, 0xD0 // mov edx,r8d
#define mov_edx_r9d   0x41, 0x8B, 0xD1 // mov edx,r9d
#define mov_edx_r10d  0x41, 0x8B, 0xD2 // mov edx,r10d
#define mov_edx_r11d  0x41, 0x8B, 0xD3 // mov edx,r11d
#define mov_edx_r12d  0x41, 0x8B, 0xD4 // mov edx,r12d
#define mov_edx_r13d  0x41, 0x8B, 0xD5 // mov edx,r13d
#define mov_edx_r14d  0x41, 0x8B, 0xD6 // mov edx,r14d
#define mov_edx_r15d  0x41, 0x8B, 0xD7 // mov edx,r15d
#define mov_ebx_eax   0x8B, 0xD8       // mov ebx,eax
#define mov_ebx_ecx   0x8B, 0xD9       // mov ebx,ecx
#define mov_ebx_edx   0x8B, 0xDA       // mov ebx,edx
#define mov_ebx_ebx   0x8B, 0xDB       // mov ebx,ebx
#define mov_ebx_esp   0x8B, 0xDC       // mov ebx,esp
#define mov_ebx_ebp   0x8B, 0xDD       // mov ebx,ebp
#define mov_ebx_esi   0x8B, 0xDE       // mov ebx,esi
#define mov_ebx_edi   0x8B, 0xDF       // mov ebx,edi
#define mov_ebx_r8d   0x41, 0x8B, 0xD8 // mov ebx,r8d
#define mov_ebx_r9d   0x41, 0x8B, 0xD9 // mov ebx,r9d
#define mov_ebx_r10d  0x41, 0x8B, 0xDA // mov ebx,r10d
#define mov_ebx_r11d  0x41, 0x8B, 0xDB // mov ebx,r11d
#define mov_ebx_r12d  0x41, 0x8B, 0xDC // mov ebx,r12d
#define mov_ebx_r13d  0x41, 0x8B, 0xDD // mov ebx,r13d
#define mov_ebx_r14d  0x41, 0x8B, 0xDE // mov ebx,r14d
#define mov_ebx_r15d  0x41, 0x8B, 0xDF // mov ebx,r15d
#define mov_esp_eax   0x8B, 0xE0       // mov esp,eax
#define mov_esp_ecx   0x8B, 0xE1       // mov esp,ecx
#define mov_esp_edx   0x8B, 0xE2       // mov esp,edx
#define mov_esp_ebx   0x8B, 0xE3       // mov esp,ebx
#define mov_esp_esp   0x8B, 0xE4       // mov esp,esp
#define mov_esp_ebp   0x8B, 0xE5       // mov esp,ebp
#define mov_esp_esi   0x8B, 0xE6       // mov esp,esi
#define mov_esp_edi   0x8B, 0xE7       // mov esp,edi
#define mov_esp_r8d   0x41, 0x8B, 0xE0 // mov esp,r8d
#define mov_esp_r9d   0x41, 0x8B, 0xE1 // mov esp,r9d
#define mov_esp_r10d  0x41, 0x8B, 0xE2 // mov esp,r10d
#define mov_esp_r11d  0x41, 0x8B, 0xE3 // mov esp,r11d
#define mov_esp_r12d  0x41, 0x8B, 0xE4 // mov esp,r12d
#define mov_esp_r13d  0x41, 0x8B, 0xE5 // mov esp,r13d
#define mov_esp_r14d  0x41, 0x8B, 0xE6 // mov esp,r14d
#define mov_esp_r15d  0x41, 0x8B, 0xE7 // mov esp,r15d
#define mov_ebp_eax   0x8B, 0xE8       // mov ebp,eax
#define mov_ebp_ecx   0x8B, 0xE9       // mov ebp,ecx
#define mov_ebp_edx   0x8B, 0xEA       // mov ebp,edx
#define mov_ebp_ebx   0x8B, 0xEB       // mov ebp,ebx
#define mov_ebp_esp   0x8B, 0xEC       // mov ebp,esp
#define mov_ebp_ebp   0x8B, 0xED       // mov ebp,ebp
#define mov_ebp_esi   0x8B, 0xEE       // mov ebp,esi
#define mov_ebp_edi   0x8B, 0xEF       // mov ebp,edi
#define mov_ebp_r8d   0x41, 0x8B, 0xE8 // mov ebp,r8d
#define mov_ebp_r9d   0x41, 0x8B, 0xE9 // mov ebp,r9d
#define mov_ebp_r10d  0x41, 0x8B, 0xEA // mov ebp,r10d
#define mov_ebp_r11d  0x41, 0x8B, 0xEB // mov ebp,r11d
#define mov_ebp_r12d  0x41, 0x8B, 0xEC // mov ebp,r12d
#define mov_ebp_r13d  0x41, 0x8B, 0xED // mov ebp,r13d
#define mov_ebp_r14d  0x41, 0x8B, 0xEE // mov ebp,r14d
#define mov_ebp_r15d  0x41, 0x8B, 0xEF // mov ebp,r15d
#define mov_esi_eax   0x8B, 0xF0       // mov esi,eax
#define mov_esi_ecx   0x8B, 0xF1       // mov esi,ecx
#define mov_esi_edx   0x8B, 0xF2       // mov esi,edx
#define mov_esi_ebx   0x8B, 0xF3       // mov esi,ebx
#define mov_esi_esp   0x8B, 0xF4       // mov esi,esp
#define mov_esi_ebp   0x8B, 0xF5       // mov esi,ebp
#define mov_esi_esi   0x8B, 0xF6       // mov esi,esi
#define mov_esi_edi   0x8B, 0xF7       // mov esi,edi
#define mov_esi_r8d   0x41, 0x8B, 0xF0 // mov esi,r8d
#define mov_esi_r9d   0x41, 0x8B, 0xF1 // mov esi,r9d
#define mov_esi_r10d  0x41, 0x8B, 0xF2 // mov esi,r10d
#define mov_esi_r11d  0x41, 0x8B, 0xF3 // mov esi,r11d
#define mov_esi_r12d  0x41, 0x8B, 0xF4 // mov esi,r12d
#define mov_esi_r13d  0x41, 0x8B, 0xF5 // mov esi,r13d
#define mov_esi_r14d  0x41, 0x8B, 0xF6 // mov esi,r14d
#define mov_esi_r15d  0x41, 0x8B, 0xF7 // mov esi,r15d
#define mov_edi_eax   0x8B, 0xF8       // mov edi,eax
#define mov_edi_ecx   0x8B, 0xF9       // mov edi,ecx
#define mov_edi_edx   0x8B, 0xFA       // mov edi,edx
#define mov_edi_ebx   0x8B, 0xFB       // mov edi,ebx
#define mov_edi_esp   0x8B, 0xFC       // mov edi,esp
#define mov_edi_ebp   0x8B, 0xFD       // mov edi,ebp
#define mov_edi_esi   0x8B, 0xFE       // mov edi,esi
#define mov_edi_edi   0x8B, 0xFF       // mov edi,edi
#define mov_edi_r8d   0x41, 0x8B, 0xF8 // mov edi,r8d
#define mov_edi_r9d   0x41, 0x8B, 0xF9 // mov edi,r9d
#define mov_edi_r10d  0x41, 0x8B, 0xFA // mov edi,r10d
#define mov_edi_r11d  0x41, 0x8B, 0xFB // mov edi,r11d
#define mov_edi_r12d  0x41, 0x8B, 0xFC // mov edi,r12d
#define mov_edi_r13d  0x41, 0x8B, 0xFD // mov edi,r13d
#define mov_edi_r14d  0x41, 0x8B, 0xFE // mov edi,r14d
#define mov_edi_r15d  0x41, 0x8B, 0xFF // mov edi,r15d
#define mov_r8d_eax   0x44, 0x8B, 0xC0 // mov r8d,eax
#define mov_r8d_ecx   0x44, 0x8B, 0xC1 // mov r8d,ecx
#define mov_r8d_edx   0x44, 0x8B, 0xC2 // mov r8d,edx
#define mov_r8d_ebx   0x44, 0x8B, 0xC3 // mov r8d,ebx
#define mov_r8d_esp   0x44, 0x8B, 0xC4 // mov r8d,esp
#define mov_r8d_ebp   0x44, 0x8B, 0xC5 // mov r8d,ebp
#define mov_r8d_esi   0x44, 0x8B, 0xC6 // mov r8d,esi
#define mov_r8d_edi   0x44, 0x8B, 0xC7 // mov r8d,edi
#define mov_r8d_r8d   0x45, 0x8B, 0xC0 // mov r8d,r8d
#define mov_r8d_r9d   0x45, 0x8B, 0xC1 // mov r8d,r9d
#define mov_r8d_r10d  0x45, 0x8B, 0xC2 // mov r8d,r10d
#define mov_r8d_r11d  0x45, 0x8B, 0xC3 // mov r8d,r11d
#define mov_r8d_r12d  0x45, 0x8B, 0xC4 // mov r8d,r12d
#define mov_r8d_r13d  0x45, 0x8B, 0xC5 // mov r8d,r13d
#define mov_r8d_r14d  0x45, 0x8B, 0xC6 // mov r8d,r14d
#define mov_r8d_r15d  0x45, 0x8B, 0xC7 // mov r8d,r15d
#define mov_r9d_eax   0x44, 0x8B, 0xC8 // mov r9d,eax
#define mov_r9d_ecx   0x44, 0x8B, 0xC9 // mov r9d,ecx
#define mov_r9d_edx   0x44, 0x8B, 0xCA // mov r9d,edx
#define mov_r9d_ebx   0x44, 0x8B, 0xCB // mov r9d,ebx
#define mov_r9d_esp   0x44, 0x8B, 0xCC // mov r9d,esp
#define mov_r9d_ebp   0x44, 0x8B, 0xCD // mov r9d,ebp
#define mov_r9d_esi   0x44, 0x8B, 0xCE // mov r9d,esi
#define mov_r9d_edi   0x44, 0x8B, 0xCF // mov r9d,edi
#define mov_r9d_r8d   0x45, 0x8B, 0xC8 // mov r9d,r8d
#define mov_r9d_r9d   0x45, 0x8B, 0xC9 // mov r9d,r9d
#define mov_r9d_r10d  0x45, 0x8B, 0xCA // mov r9d,r10d
#define mov_r9d_r11d  0x45, 0x8B, 0xCB // mov r9d,r11d
#define mov_r9d_r12d  0x45, 0x8B, 0xCC // mov r9d,r12d
#define mov_r9d_r13d  0x45, 0x8B, 0xCD // mov r9d,r13d
#define mov_r9d_r14d  0x45, 0x8B, 0xCE // mov r9d,r14d
#define mov_r9d_r15d  0x45, 0x8B, 0xCF // mov r9d,r15d
#define mov_r10d_eax  0x44, 0x8B, 0xD0 // mov r10d,eax
#define mov_r10d_ecx  0x44, 0x8B, 0xD1 // mov r10d,ecx
#define mov_r10d_edx  0x44, 0x8B, 0xD2 // mov r10d,edx
#define mov_r10d_ebx  0x44, 0x8B, 0xD3 // mov r10d,ebx
#define mov_r10d_esp  0x44, 0x8B, 0xD4 // mov r10d,esp
#define mov_r10d_ebp  0x44, 0x8B, 0xD5 // mov r10d,ebp
#define mov_r10d_esi  0x44, 0x8B, 0xD6 // mov r10d,esi
#define mov_r10d_edi  0x44, 0x8B, 0xD7 // mov r10d,edi
#define mov_r10d_r8d  0x45, 0x8B, 0xD0 // mov r10d,r8d
#define mov_r10d_r9d  0x45, 0x8B, 0xD1 // mov r10d,r9d
#define mov_r10d_r10d 0x45, 0x8B, 0xD2 // mov r10d,r10d
#define mov_r10d_r11d 0x45, 0x8B, 0xD3 // mov r10d,r11d
#define mov_r10d_r12d 0x45, 0x8B, 0xD4 // mov r10d,r12d
#define mov_r10d_r13d 0x45, 0x8B, 0xD5 // mov r10d,r13d
#define mov_r10d_r14d 0x45, 0x8B, 0xD6 // mov r10d,r14d
#define mov_r10d_r15d 0x45, 0x8B, 0xD7 // mov r10d,r15d
#define mov_r11d_eax  0x44, 0x8B, 0xD8 // mov r11d,eax
#define mov_r11d_ecx  0x44, 0x8B, 0xD9 // mov r11d,ecx
#define mov_r11d_edx  0x44, 0x8B, 0xDA // mov r11d,edx
#define mov_r11d_ebx  0x44, 0x8B, 0xDB // mov r11d,ebx
#define mov_r11d_esp  0x44, 0x8B, 0xDC // mov r11d,esp
#define mov_r11d_ebp  0x44, 0x8B, 0xDD // mov r11d,ebp
#define mov_r11d_esi  0x44, 0x8B, 0xDE // mov r11d,esi
#define mov_r11d_edi  0x44, 0x8B, 0xDF // mov r11d,edi
#define mov_r11d_r8d  0x45, 0x8B, 0xD8 // mov r11d,r8d
#define mov_r11d_r9d  0x45, 0x8B, 0xD9 // mov r11d,r9d
#define mov_r11d_r10d 0x45, 0x8B, 0xDA // mov r11d,r10d
#define mov_r11d_r11d 0x45, 0x8B, 0xDB // mov r11d,r11d
#define mov_r11d_r12d 0x45, 0x8B, 0xDC // mov r11d,r12d
#define mov_r11d_r13d 0x45, 0x8B, 0xDD // mov r11d,r13d
#define mov_r11d_r14d 0x45, 0x8B, 0xDE // mov r11d,r14d
#define mov_r11d_r15d 0x45, 0x8B, 0xDF // mov r11d,r15d
#define mov_r12d_eax  0x44, 0x8B, 0xE0 // mov r12d,eax
#define mov_r12d_ecx  0x44, 0x8B, 0xE1 // mov r12d,ecx
#define mov_r12d_edx  0x44, 0x8B, 0xE2 // mov r12d,edx
#define mov_r12d_ebx  0x44, 0x8B, 0xE3 // mov r12d,ebx
#define mov_r12d_esp  0x44, 0x8B, 0xE4 // mov r12d,esp
#define mov_r12d_ebp  0x44, 0x8B, 0xE5 // mov r12d,ebp
#define mov_r12d_esi  0x44, 0x8B, 0xE6 // mov r12d,esi
#define mov_r12d_edi  0x44, 0x8B, 0xE7 // mov r12d,edi
#define mov_r12d_r8d  0x45, 0x8B, 0xE0 // mov r12d,r8d
#define mov_r12d_r9d  0x45, 0x8B, 0xE1 // mov r12d,r9d
#define mov_r12d_r10d 0x45, 0x8B, 0xE2 // mov r12d,r10d
#define mov_r12d_r11d 0x45, 0x8B, 0xE3 // mov r12d,r11d
#define mov_r12d_r12d 0x45, 0x8B, 0xE4 // mov r12d,r12d
#define mov_r12d_r13d 0x45, 0x8B, 0xE5 // mov r12d,r13d
#define mov_r12d_r14d 0x45, 0x8B, 0xE6 // mov r12d,r14d
#define mov_r12d_r15d 0x45, 0x8B, 0xE7 // mov r12d,r15d
#define mov_r13d_eax  0x44, 0x8B, 0xE8 // mov r13d,eax
#define mov_r13d_ecx  0x44, 0x8B, 0xE9 // mov r13d,ecx
#define mov_r13d_edx  0x44, 0x8B, 0xEA // mov r13d,edx
#define mov_r13d_ebx  0x44, 0x8B, 0xEB // mov r13d,ebx
#define mov_r13d_esp  0x44, 0x8B, 0xEC // mov r13d,esp
#define mov_r13d_ebp  0x44, 0x8B, 0xED // mov r13d,ebp
#define mov_r13d_esi  0x44, 0x8B, 0xEE // mov r13d,esi
#define mov_r13d_edi  0x44, 0x8B, 0xEF // mov r13d,edi
#define mov_r13d_r8d  0x45, 0x8B, 0xE8 // mov r13d,r8d
#define mov_r13d_r9d  0x45, 0x8B, 0xE9 // mov r13d,r9d
#define mov_r13d_r10d 0x45, 0x8B, 0xEA // mov r13d,r10d
#define mov_r13d_r11d 0x45, 0x8B, 0xEB // mov r13d,r11d
#define mov_r13d_r12d 0x45, 0x8B, 0xEC // mov r13d,r12d
#define mov_r13d_r13d 0x45, 0x8B, 0xED // mov r13d,r13d
#define mov_r13d_r14d 0x45, 0x8B, 0xEE // mov r13d,r14d
#define mov_r13d_r15d 0x45, 0x8B, 0xEF // mov r13d,r15d
#define mov_r14d_eax  0x44, 0x8B, 0xF0 // mov r14d,eax
#define mov_r14d_ecx  0x44, 0x8B, 0xF1 // mov r14d,ecx
#define mov_r14d_edx  0x44, 0x8B, 0xF2 // mov r14d,edx
#define mov_r14d_ebx  0x44, 0x8B, 0xF3 // mov r14d,ebx
#define mov_r14d_esp  0x44, 0x8B, 0xF4 // mov r14d,esp
#define mov_r14d_ebp  0x44, 0x8B, 0xF5 // mov r14d,ebp
#define mov_r14d_esi  0x44, 0x8B, 0xF6 // mov r14d,esi
#define mov_r14d_edi  0x44, 0x8B, 0xF7 // mov r14d,edi
#define mov_r14d_r8d  0x45, 0x8B, 0xF0 // mov r14d,r8d
#define mov_r14d_r9d  0x45, 0x8B, 0xF1 // mov r14d,r9d
#define mov_r14d_r10d 0x45, 0x8B, 0xF2 // mov r14d,r10d
#define mov_r14d_r11d 0x45, 0x8B, 0xF3 // mov r14d,r11d
#define mov_r14d_r12d 0x45, 0x8B, 0xF4 // mov r14d,r12d
#define mov_r14d_r13d 0x45, 0x8B, 0xF5 // mov r14d,r13d
#define mov_r14d_r14d 0x45, 0x8B, 0xF6 // mov r14d,r14d
#define mov_r14d_r15d 0x45, 0x8B, 0xF7 // mov r14d,r15d
#define mov_r15d_eax  0x44, 0x8B, 0xF8 // mov r15d,eax
#define mov_r15d_ecx  0x44, 0x8B, 0xF9 // mov r15d,ecx
#define mov_r15d_edx  0x44, 0x8B, 0xFA // mov r15d,edx
#define mov_r15d_ebx  0x44, 0x8B, 0xFB // mov r15d,ebx
#define mov_r15d_esp  0x44, 0x8B, 0xFC // mov r15d,esp
#define mov_r15d_ebp  0x44, 0x8B, 0xFD // mov r15d,ebp
#define mov_r15d_esi  0x44, 0x8B, 0xFE // mov r15d,esi
#define mov_r15d_edi  0x44, 0x8B, 0xFF // mov r15d,edi
#define mov_r15d_r8d  0x45, 0x8B, 0xF8 // mov r15d,r8d
#define mov_r15d_r9d  0x45, 0x8B, 0xF9 // mov r15d,r9d
#define mov_r15d_r10d 0x45, 0x8B, 0xFA // mov r15d,r10d
#define mov_r15d_r11d 0x45, 0x8B, 0xFB // mov r15d,r11d
#define mov_r15d_r12d 0x45, 0x8B, 0xFC // mov r15d,r12d
#define mov_r15d_r13d 0x45, 0x8B, 0xFD // mov r15d,r13d
#define mov_r15d_r14d 0x45, 0x8B, 0xFE // mov r15d,r14d
#define mov_r15d_r15d 0x45, 0x8B, 0xFF // mov r15d,r15d

#define mov_rax_rax 0x48, 0x8B, 0xC0 // mov rax,rax
#define mov_rax_rcx 0x48, 0x8B, 0xC1 // mov rax,rcx
#define mov_rax_rdx 0x48, 0x8B, 0xC2 // mov rax,rdx
#define mov_rax_rbx 0x48, 0x8B, 0xC3 // mov rax,rbx
#define mov_rax_rsp 0x48, 0x8B, 0xC4 // mov rax,rsp
#define mov_rax_rbp 0x48, 0x8B, 0xC5 // mov rax,rbp
#define mov_rax_rsi 0x48, 0x8B, 0xC6 // mov rax,rsi
#define mov_rax_rdi 0x48, 0x8B, 0xC7 // mov rax,rdi
#define mov_rax_r8  0x49, 0x8B, 0xC0 // mov rax,r8
#define mov_rax_r9  0x49, 0x8B, 0xC1 // mov rax,r9
#define mov_rax_r10 0x49, 0x8B, 0xC2 // mov rax,r10
#define mov_rax_r11 0x49, 0x8B, 0xC3 // mov rax,r11
#define mov_rax_r12 0x49, 0x8B, 0xC4 // mov rax,r12
#define mov_rax_r13 0x49, 0x8B, 0xC5 // mov rax,r13
#define mov_rax_r14 0x49, 0x8B, 0xC6 // mov rax,r14
#define mov_rax_r15 0x49, 0x8B, 0xC7 // mov rax,r15
#define mov_rcx_rax 0x48, 0x8B, 0xC8 // mov rcx,rax
#define mov_rcx_rcx 0x48, 0x8B, 0xC9 // mov rcx,rcx
#define mov_rcx_rdx 0x48, 0x8B, 0xCA // mov rcx,rdx
#define mov_rcx_rbx 0x48, 0x8B, 0xCB // mov rcx,rbx
#define mov_rcx_rsp 0x48, 0x8B, 0xCC // mov rcx,rsp
#define mov_rcx_rbp 0x48, 0x8B, 0xCD // mov rcx,rbp
#define mov_rcx_rsi 0x48, 0x8B, 0xCE // mov rcx,rsi
#define mov_rcx_rdi 0x48, 0x8B, 0xCF // mov rcx,rdi
#define mov_rcx_r8  0x49, 0x8B, 0xC8 // mov rcx,r8
#define mov_rcx_r9  0x49, 0x8B, 0xC9 // mov rcx,r9
#define mov_rcx_r10 0x49, 0x8B, 0xCA // mov rcx,r10
#define mov_rcx_r11 0x49, 0x8B, 0xCB // mov rcx,r11
#define mov_rcx_r12 0x49, 0x8B, 0xCC // mov rcx,r12
#define mov_rcx_r13 0x49, 0x8B, 0xCD // mov rcx,r13
#define mov_rcx_r14 0x49, 0x8B, 0xCE // mov rcx,r14
#define mov_rcx_r15 0x49, 0x8B, 0xCF // mov rcx,r15
#define mov_rdx_rax 0x48, 0x8B, 0xD0 // mov rdx,rax
#define mov_rdx_rcx 0x48, 0x8B, 0xD1 // mov rdx,rcx
#define mov_rdx_rdx 0x48, 0x8B, 0xD2 // mov rdx,rdx
#define mov_rdx_rbx 0x48, 0x8B, 0xD3 // mov rdx,rbx
#define mov_rdx_rsp 0x48, 0x8B, 0xD4 // mov rdx,rsp
#define mov_rdx_rbp 0x48, 0x8B, 0xD5 // mov rdx,rbp
#define mov_rdx_rsi 0x48, 0x8B, 0xD6 // mov rdx,rsi
#define mov_rdx_rdi 0x48, 0x8B, 0xD7 // mov rdx,rdi
#define mov_rdx_r8  0x49, 0x8B, 0xD0 // mov rdx,r8
#define mov_rdx_r9  0x49, 0x8B, 0xD1 // mov rdx,r9
#define mov_rdx_r10 0x49, 0x8B, 0xD2 // mov rdx,r10
#define mov_rdx_r11 0x49, 0x8B, 0xD3 // mov rdx,r11
#define mov_rdx_r12 0x49, 0x8B, 0xD4 // mov rdx,r12
#define mov_rdx_r13 0x49, 0x8B, 0xD5 // mov rdx,r13
#define mov_rdx_r14 0x49, 0x8B, 0xD6 // mov rdx,r14
#define mov_rdx_r15 0x49, 0x8B, 0xD7 // mov rdx,r15
#define mov_rbx_rax 0x48, 0x8B, 0xD8 // mov rbx,rax
#define mov_rbx_rcx 0x48, 0x8B, 0xD9 // mov rbx,rcx
#define mov_rbx_rdx 0x48, 0x8B, 0xDA // mov rbx,rdx
#define mov_rbx_rbx 0x48, 0x8B, 0xDB // mov rbx,rbx
#define mov_rbx_rsp 0x48, 0x8B, 0xDC // mov rbx,rsp
#define mov_rbx_rbp 0x48, 0x8B, 0xDD // mov rbx,rbp
#define mov_rbx_rsi 0x48, 0x8B, 0xDE // mov rbx,rsi
#define mov_rbx_rdi 0x48, 0x8B, 0xDF // mov rbx,rdi
#define mov_rbx_r8  0x49, 0x8B, 0xD8 // mov rbx,r8
#define mov_rbx_r9  0x49, 0x8B, 0xD9 // mov rbx,r9
#define mov_rbx_r10 0x49, 0x8B, 0xDA // mov rbx,r10
#define mov_rbx_r11 0x49, 0x8B, 0xDB // mov rbx,r11
#define mov_rbx_r12 0x49, 0x8B, 0xDC // mov rbx,r12
#define mov_rbx_r13 0x49, 0x8B, 0xDD // mov rbx,r13
#define mov_rbx_r14 0x49, 0x8B, 0xDE // mov rbx,r14
#define mov_rbx_r15 0x49, 0x8B, 0xDF // mov rbx,r15
#define mov_rsp_rax 0x48, 0x8B, 0xE0 // mov rsp,rax
#define mov_rsp_rcx 0x48, 0x8B, 0xE1 // mov rsp,rcx
#define mov_rsp_rdx 0x48, 0x8B, 0xE2 // mov rsp,rdx
#define mov_rsp_rbx 0x48, 0x8B, 0xE3 // mov rsp,rbx
#define mov_rsp_rsp 0x48, 0x8B, 0xE4 // mov rsp,rsp
#define mov_rsp_rbp 0x48, 0x8B, 0xE5 // mov rsp,rbp
#define mov_rsp_rsi 0x48, 0x8B, 0xE6 // mov rsp,rsi
#define mov_rsp_rdi 0x48, 0x8B, 0xE7 // mov rsp,rdi
#define mov_rsp_r8  0x49, 0x8B, 0xE0 // mov rsp,r8
#define mov_rsp_r9  0x49, 0x8B, 0xE1 // mov rsp,r9
#define mov_rsp_r10 0x49, 0x8B, 0xE2 // mov rsp,r10
#define mov_rsp_r11 0x49, 0x8B, 0xE3 // mov rsp,r11
#define mov_rsp_r12 0x49, 0x8B, 0xE4 // mov rsp,r12
#define mov_rsp_r13 0x49, 0x8B, 0xE5 // mov rsp,r13
#define mov_rsp_r14 0x49, 0x8B, 0xE6 // mov rsp,r14
#define mov_rsp_r15 0x49, 0x8B, 0xE7 // mov rsp,r15
#define mov_rbp_rax 0x48, 0x8B, 0xE8 // mov rbp,rax
#define mov_rbp_rcx 0x48, 0x8B, 0xE9 // mov rbp,rcx
#define mov_rbp_rdx 0x48, 0x8B, 0xEA // mov rbp,rdx
#define mov_rbp_rbx 0x48, 0x8B, 0xEB // mov rbp,rbx
#define mov_rbp_rsp 0x48, 0x8B, 0xEC // mov rbp,rsp
#define mov_rbp_rbp 0x48, 0x8B, 0xED // mov rbp,rbp
#define mov_rbp_rsi 0x48, 0x8B, 0xEE // mov rbp,rsi
#define mov_rbp_rdi 0x48, 0x8B, 0xEF // mov rbp,rdi
#define mov_rbp_r8  0x49, 0x8B, 0xE8 // mov rbp,r8
#define mov_rbp_r9  0x49, 0x8B, 0xE9 // mov rbp,r9
#define mov_rbp_r10 0x49, 0x8B, 0xEA // mov rbp,r10
#define mov_rbp_r11 0x49, 0x8B, 0xEB // mov rbp,r11
#define mov_rbp_r12 0x49, 0x8B, 0xEC // mov rbp,r12
#define mov_rbp_r13 0x49, 0x8B, 0xED // mov rbp,r13
#define mov_rbp_r14 0x49, 0x8B, 0xEE // mov rbp,r14
#define mov_rbp_r15 0x49, 0x8B, 0xEF // mov rbp,r15
#define mov_rsi_rax 0x48, 0x8B, 0xF0 // mov rsi,rax
#define mov_rsi_rcx 0x48, 0x8B, 0xF1 // mov rsi,rcx
#define mov_rsi_rdx 0x48, 0x8B, 0xF2 // mov rsi,rdx
#define mov_rsi_rbx 0x48, 0x8B, 0xF3 // mov rsi,rbx
#define mov_rsi_rsp 0x48, 0x8B, 0xF4 // mov rsi,rsp
#define mov_rsi_rbp 0x48, 0x8B, 0xF5 // mov rsi,rbp
#define mov_rsi_rsi 0x48, 0x8B, 0xF6 // mov rsi,rsi
#define mov_rsi_rdi 0x48, 0x8B, 0xF7 // mov rsi,rdi
#define mov_rsi_r8  0x49, 0x8B, 0xF0 // mov rsi,r8
#define mov_rsi_r9  0x49, 0x8B, 0xF1 // mov rsi,r9
#define mov_rsi_r10 0x49, 0x8B, 0xF2 // mov rsi,r10
#define mov_rsi_r11 0x49, 0x8B, 0xF3 // mov rsi,r11
#define mov_rsi_r12 0x49, 0x8B, 0xF4 // mov rsi,r12
#define mov_rsi_r13 0x49, 0x8B, 0xF5 // mov rsi,r13
#define mov_rsi_r14 0x49, 0x8B, 0xF6 // mov rsi,r14
#define mov_rsi_r15 0x49, 0x8B, 0xF7 // mov rsi,r15
#define mov_rdi_rax 0x48, 0x8B, 0xF8 // mov rdi,rax
#define mov_rdi_rcx 0x48, 0x8B, 0xF9 // mov rdi,rcx
#define mov_rdi_rdx 0x48, 0x8B, 0xFA // mov rdi,rdx
#define mov_rdi_rbx 0x48, 0x8B, 0xFB // mov rdi,rbx
#define mov_rdi_rsp 0x48, 0x8B, 0xFC // mov rdi,rsp
#define mov_rdi_rbp 0x48, 0x8B, 0xFD // mov rdi,rbp
#define mov_rdi_rsi 0x48, 0x8B, 0xFE // mov rdi,rsi
#define mov_rdi_rdi 0x48, 0x8B, 0xFF // mov rdi,rdi
#define mov_rdi_r8  0x49, 0x8B, 0xF8 // mov rdi,r8
#define mov_rdi_r9  0x49, 0x8B, 0xF9 // mov rdi,r9
#define mov_rdi_r10 0x49, 0x8B, 0xFA // mov rdi,r10
#define mov_rdi_r11 0x49, 0x8B, 0xFB // mov rdi,r11
#define mov_rdi_r12 0x49, 0x8B, 0xFC // mov rdi,r12
#define mov_rdi_r13 0x49, 0x8B, 0xFD // mov rdi,r13
#define mov_rdi_r14 0x49, 0x8B, 0xFE // mov rdi,r14
#define mov_rdi_r15 0x49, 0x8B, 0xFF // mov rdi,r15
#define mov_r8_rax  0x4C, 0x8B, 0xC0 // mov r8,rax
#define mov_r8_rcx  0x4C, 0x8B, 0xC1 // mov r8,rcx
#define mov_r8_rdx  0x4C, 0x8B, 0xC2 // mov r8,rdx
#define mov_r8_rbx  0x4C, 0x8B, 0xC3 // mov r8,rbx
#define mov_r8_rsp  0x4C, 0x8B, 0xC4 // mov r8,rsp
#define mov_r8_rbp  0x4C, 0x8B, 0xC5 // mov r8,rbp
#define mov_r8_rsi  0x4C, 0x8B, 0xC6 // mov r8,rsi
#define mov_r8_rdi  0x4C, 0x8B, 0xC7 // mov r8,rdi
#define mov_r8_r8   0x4D, 0x8B, 0xC0 // mov r8,r8
#define mov_r8_r9   0x4D, 0x8B, 0xC1 // mov r8,r9
#define mov_r8_r10  0x4D, 0x8B, 0xC2 // mov r8,r10
#define mov_r8_r11  0x4D, 0x8B, 0xC3 // mov r8,r11
#define mov_r8_r12  0x4D, 0x8B, 0xC4 // mov r8,r12
#define mov_r8_r13  0x4D, 0x8B, 0xC5 // mov r8,r13
#define mov_r8_r14  0x4D, 0x8B, 0xC6 // mov r8,r14
#define mov_r8_r15  0x4D, 0x8B, 0xC7 // mov r8,r15
#define mov_r9_rax  0x4C, 0x8B, 0xC8 // mov r9,rax
#define mov_r9_rcx  0x4C, 0x8B, 0xC9 // mov r9,rcx
#define mov_r9_rdx  0x4C, 0x8B, 0xCA // mov r9,rdx
#define mov_r9_rbx  0x4C, 0x8B, 0xCB // mov r9,rbx
#define mov_r9_rsp  0x4C, 0x8B, 0xCC // mov r9,rsp
#define mov_r9_rbp  0x4C, 0x8B, 0xCD // mov r9,rbp
#define mov_r9_rsi  0x4C, 0x8B, 0xCE // mov r9,rsi
#define mov_r9_rdi  0x4C, 0x8B, 0xCF // mov r9,rdi
#define mov_r9_r8   0x4D, 0x8B, 0xC8 // mov r9,r8
#define mov_r9_r9   0x4D, 0x8B, 0xC9 // mov r9,r9
#define mov_r9_r10  0x4D, 0x8B, 0xCA // mov r9,r10
#define mov_r9_r11  0x4D, 0x8B, 0xCB // mov r9,r11
#define mov_r9_r12  0x4D, 0x8B, 0xCC // mov r9,r12
#define mov_r9_r13  0x4D, 0x8B, 0xCD // mov r9,r13
#define mov_r9_r14  0x4D, 0x8B, 0xCE // mov r9,r14
#define mov_r9_r15  0x4D, 0x8B, 0xCF // mov r9,r15
#define mov_r10_rax 0x4C, 0x8B, 0xD0 // mov r10,rax
#define mov_r10_rcx 0x4C, 0x8B, 0xD1 // mov r10,rcx
#define mov_r10_rdx 0x4C, 0x8B, 0xD2 // mov r10,rdx
#define mov_r10_rbx 0x4C, 0x8B, 0xD3 // mov r10,rbx
#define mov_r10_rsp 0x4C, 0x8B, 0xD4 // mov r10,rsp
#define mov_r10_rbp 0x4C, 0x8B, 0xD5 // mov r10,rbp
#define mov_r10_rsi 0x4C, 0x8B, 0xD6 // mov r10,rsi
#define mov_r10_rdi 0x4C, 0x8B, 0xD7 // mov r10,rdi
#define mov_r10_r8  0x4D, 0x8B, 0xD0 // mov r10,r8
#define mov_r10_r9  0x4D, 0x8B, 0xD1 // mov r10,r9
#define mov_r10_r10 0x4D, 0x8B, 0xD2 // mov r10,r10
#define mov_r10_r11 0x4D, 0x8B, 0xD3 // mov r10,r11
#define mov_r10_r12 0x4D, 0x8B, 0xD4 // mov r10,r12
#define mov_r10_r13 0x4D, 0x8B, 0xD5 // mov r10,r13
#define mov_r10_r14 0x4D, 0x8B, 0xD6 // mov r10,r14
#define mov_r10_r15 0x4D, 0x8B, 0xD7 // mov r10,r15
#define mov_r11_rax 0x4C, 0x8B, 0xD8 // mov r11,rax
#define mov_r11_rcx 0x4C, 0x8B, 0xD9 // mov r11,rcx
#define mov_r11_rdx 0x4C, 0x8B, 0xDA // mov r11,rdx
#define mov_r11_rbx 0x4C, 0x8B, 0xDB // mov r11,rbx
#define mov_r11_rsp 0x4C, 0x8B, 0xDC // mov r11,rsp
#define mov_r11_rbp 0x4C, 0x8B, 0xDD // mov r11,rbp
#define mov_r11_rsi 0x4C, 0x8B, 0xDE // mov r11,rsi
#define mov_r11_rdi 0x4C, 0x8B, 0xDF // mov r11,rdi
#define mov_r11_r8  0x4D, 0x8B, 0xD8 // mov r11,r8
#define mov_r11_r9  0x4D, 0x8B, 0xD9 // mov r11,r9
#define mov_r11_r10 0x4D, 0x8B, 0xDA // mov r11,r10
#define mov_r11_r11 0x4D, 0x8B, 0xDB // mov r11,r11
#define mov_r11_r12 0x4D, 0x8B, 0xDC // mov r11,r12
#define mov_r11_r13 0x4D, 0x8B, 0xDD // mov r11,r13
#define mov_r11_r14 0x4D, 0x8B, 0xDE // mov r11,r14
#define mov_r11_r15 0x4D, 0x8B, 0xDF // mov r11,r15
#define mov_r12_rax 0x4C, 0x8B, 0xE0 // mov r12,rax
#define mov_r12_rcx 0x4C, 0x8B, 0xE1 // mov r12,rcx
#define mov_r12_rdx 0x4C, 0x8B, 0xE2 // mov r12,rdx
#define mov_r12_rbx 0x4C, 0x8B, 0xE3 // mov r12,rbx
#define mov_r12_rsp 0x4C, 0x8B, 0xE4 // mov r12,rsp
#define mov_r12_rbp 0x4C, 0x8B, 0xE5 // mov r12,rbp
#define mov_r12_rsi 0x4C, 0x8B, 0xE6 // mov r12,rsi
#define mov_r12_rdi 0x4C, 0x8B, 0xE7 // mov r12,rdi
#define mov_r12_r8  0x4D, 0x8B, 0xE0 // mov r12,r8
#define mov_r12_r9  0x4D, 0x8B, 0xE1 // mov r12,r9
#define mov_r12_r10 0x4D, 0x8B, 0xE2 // mov r12,r10
#define mov_r12_r11 0x4D, 0x8B, 0xE3 // mov r12,r11
#define mov_r12_r12 0x4D, 0x8B, 0xE4 // mov r12,r12
#define mov_r12_r13 0x4D, 0x8B, 0xE5 // mov r12,r13
#define mov_r12_r14 0x4D, 0x8B, 0xE6 // mov r12,r14
#define mov_r12_r15 0x4D, 0x8B, 0xE7 // mov r12,r15
#define mov_r13_rax 0x4C, 0x8B, 0xE8 // mov r13,rax
#define mov_r13_rcx 0x4C, 0x8B, 0xE9 // mov r13,rcx
#define mov_r13_rdx 0x4C, 0x8B, 0xEA // mov r13,rdx
#define mov_r13_rbx 0x4C, 0x8B, 0xEB // mov r13,rbx
#define mov_r13_rsp 0x4C, 0x8B, 0xEC // mov r13,rsp
#define mov_r13_rbp 0x4C, 0x8B, 0xED // mov r13,rbp
#define mov_r13_rsi 0x4C, 0x8B, 0xEE // mov r13,rsi
#define mov_r13_rdi 0x4C, 0x8B, 0xEF // mov r13,rdi
#define mov_r13_r8  0x4D, 0x8B, 0xE8 // mov r13,r8
#define mov_r13_r9  0x4D, 0x8B, 0xE9 // mov r13,r9
#define mov_r13_r10 0x4D, 0x8B, 0xEA // mov r13,r10
#define mov_r13_r11 0x4D, 0x8B, 0xEB // mov r13,r11
#define mov_r13_r12 0x4D, 0x8B, 0xEC // mov r13,r12
#define mov_r13_r13 0x4D, 0x8B, 0xED // mov r13,r13
#define mov_r13_r14 0x4D, 0x8B, 0xEE // mov r13,r14
#define mov_r13_r15 0x4D, 0x8B, 0xEF // mov r13,r15
#define mov_r14_rax 0x4C, 0x8B, 0xF0 // mov r14,rax
#define mov_r14_rcx 0x4C, 0x8B, 0xF1 // mov r14,rcx
#define mov_r14_rdx 0x4C, 0x8B, 0xF2 // mov r14,rdx
#define mov_r14_rbx 0x4C, 0x8B, 0xF3 // mov r14,rbx
#define mov_r14_rsp 0x4C, 0x8B, 0xF4 // mov r14,rsp
#define mov_r14_rbp 0x4C, 0x8B, 0xF5 // mov r14,rbp
#define mov_r14_rsi 0x4C, 0x8B, 0xF6 // mov r14,rsi
#define mov_r14_rdi 0x4C, 0x8B, 0xF7 // mov r14,rdi
#define mov_r14_r8  0x4D, 0x8B, 0xF0 // mov r14,r8
#define mov_r14_r9  0x4D, 0x8B, 0xF1 // mov r14,r9
#define mov_r14_r10 0x4D, 0x8B, 0xF2 // mov r14,r10
#define mov_r14_r11 0x4D, 0x8B, 0xF3 // mov r14,r11
#define mov_r14_r12 0x4D, 0x8B, 0xF4 // mov r14,r12
#define mov_r14_r13 0x4D, 0x8B, 0xF5 // mov r14,r13
#define mov_r14_r14 0x4D, 0x8B, 0xF6 // mov r14,r14
#define mov_r14_r15 0x4D, 0x8B, 0xF7 // mov r14,r15
#define mov_r15_rax 0x4C, 0x8B, 0xF8 // mov r15,rax
#define mov_r15_rcx 0x4C, 0x8B, 0xF9 // mov r15,rcx
#define mov_r15_rdx 0x4C, 0x8B, 0xFA // mov r15,rdx
#define mov_r15_rbx 0x4C, 0x8B, 0xFB // mov r15,rbx
#define mov_r15_rsp 0x4C, 0x8B, 0xFC // mov r15,rsp
#define mov_r15_rbp 0x4C, 0x8B, 0xFD // mov r15,rbp
#define mov_r15_rsi 0x4C, 0x8B, 0xFE // mov r15,rsi
#define mov_r15_rdi 0x4C, 0x8B, 0xFF // mov r15,rdi
#define mov_r15_r8  0x4D, 0x8B, 0xF8 // mov r15,r8
#define mov_r15_r9  0x4D, 0x8B, 0xF9 // mov r15,r9
#define mov_r15_r10 0x4D, 0x8B, 0xFA // mov r15,r10
#define mov_r15_r11 0x4D, 0x8B, 0xFB // mov r15,r11
#define mov_r15_r12 0x4D, 0x8B, 0xFC // mov r15,r12
#define mov_r15_r13 0x4D, 0x8B, 0xFD // mov r15,r13
#define mov_r15_r14 0x4D, 0x8B, 0xFE // mov r15,r14
#define mov_r15_r15 0x4D, 0x8B, 0xFF // mov r15,r15

#define push_rax       0x50 // push rax
#define push_rcx       0x51 // push rcx
#define push_rdx       0x52 // push rdx
#define push_rbx       0x53 // push rbx
#define push_rsp       0x54 // push rsp
#define push_rbp       0x55 // push rbp
#define push_rsi       0x56 // push rsi
#define push_rdi       0x57 // push rdi
#define push_r8  0x41, 0x50 // push r8
#define push_r9  0x41, 0x51 // push r9
#define push_r10 0x41, 0x52 // push r10
#define push_r11 0x41, 0x53 // push r11
#define push_r12 0x41, 0x54 // push r12
#define push_r13 0x41, 0x55 // push r13
#define push_r14 0x41, 0x56 // push r14
#define push_r15 0x41, 0x57 // push r15
#define pushfq         0x9C // pushfq

#define pop_rax       0x58 // pop rax
#define pop_rcx       0x59 // pop rcx
#define pop_rdx       0x5A // pop rdx
#define pop_rbx       0x5B // pop rbx
#define pop_rsp       0x5C // pop rsp
#define pop_rbp       0x5D // pop rbp
#define pop_rsi       0x5E // pop rsi
#define pop_rdi       0x5F // pop rdi
#define pop_r8  0x41, 0x58 // pop r8
#define pop_r9  0x41, 0x59 // pop r9
#define pop_r10 0x41, 0x5A // pop r10
#define pop_r11 0x41, 0x5B // pop r11
#define pop_r12 0x41, 0x5C // pop r12
#define pop_r13 0x41, 0x5D // pop r13
#define pop_r14 0x41, 0x5E // pop r14
#define pop_r15 0x41, 0x5F // pop r15
#define popfq         0x9D // popfq

#define call      0xE8, 0x00, 0x00, 0x00, 0x00 // call
#define jmp       0xE9, 0x00, 0x00, 0x00, 0x00 // jmp
#define jmp_short 0xEB, 0x00                   // jmp






#define namespaceStart(name) namespace name {
#define namespaceEnd() }




#define IntroduceSizeStruct(size)\
struct Size_##size\
{\
	byte8 data[size];\
	operator byte8 *()\
	{\
		return reinterpret_cast<byte8 *>(this);\
	}\
}




#pragma region Deprecated

#define FUNC_NAME __FUNCTION__

#define old_for_each(type, name, start, end, ...) for (type name = start; name < end; name++ __VA_OPT__(,) __VA_ARGS__)
#define old_for_all(type, name, end, ...) old_for_each(type, name, 0, end __VA_OPT__(,) __VA_ARGS__)

#pragma endregion









#ifdef __GARBAGE__
#endif
