#include <iostream>
#include <sstream>
#include <string>
#include<vector>
using namespace std;

int main()
{
    string shader;
    vector<string> codes;
    vector<string> draws;
    string code;
    string sprite;
    cout << "Shader名字:" << endl;
    getline(cin, shader);
    cout << "精灵名字:" << endl;
    getline(cin, sprite);
    cout << "请输入代码："<<endl;

   while (getline(cin, code))
    {
        if (code.empty())
            break;
        codes.push_back(code);
    }
    cout << "\n\n\n创建事件："<<endl;
    for (int i = 0; i < codes.size(); i++) {
        if (codes[i].find("uniform float") != string::npos) { int c = 14;
        
        while (codes[i].at(c) != ';') {
            cout << codes[i].at(c++);
        }
        cout << " = 0;" << endl;
        string s = "shader_set_uniform_f(shader_get_uniform(";
        s += shader;
        s += ",\"";
        s += string(codes[i].begin() + 14, codes[i].begin() + c);
        s += "\"),";
        s += string(codes[i].begin() + 14, codes[i].begin() + c);
        s += ");";
        draws.push_back(s);
        
        }
        else if (codes[i].find("uniform int") != string::npos) {
            int c = 12;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = 0;" << endl;
            string s = "shader_set_uniform_f(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 12, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 12, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
          
        }
        else if (codes[i].find("uniform vec2") != string::npos) {
            int c = 13;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0];" << endl;
            string s = "shader_set_uniform_f_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
           
        }
        else if (codes[i].find("uniform vec3") != string::npos) {
            int c = 13;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0,0];" << endl;
            string s = "shader_set_uniform_f_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
            
        }
        else if (codes[i].find("uniform vec4") != string::npos) {
            int c = 13;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0,0,0];" << endl;
            string s = "shader_set_uniform_f_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
          
        }
        else if (codes[i].find("uniform ivec2") != string::npos) {
            int c = 14;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0];" << endl;
            string s = "shader_set_uniform_i_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
            
        }
        else if (codes[i].find("uniform ivec3") != string::npos) {
            int c = 14;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0,0];" << endl;
            string s = "shader_set_uniform_i_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
          
        }
        else if (codes[i].find("uniform ivec4") != string::npos) {
            int c = 14;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0,0,0];" << endl;
            string s = "shader_set_uniform_i_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
          
        }else if (codes[i].find("uniform vec2") != string::npos) {
            int c = 13;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0];" << endl;
            string s = "shader_set_uniform_f_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
           
        }
        else if (codes[i].find("uniform vec3") != string::npos) {
            int c = 13;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0,0];" << endl;
            string s = "shader_set_uniform_f_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
            
        }
        else if (codes[i].find("uniform vec4") != string::npos) {
            int c = 13;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0,0,0];" << endl;
            string s = "shader_set_uniform_f_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
          
        }
        else if (codes[i].find("uniform ivec2") != string::npos) {
            int c = 14;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0];" << endl;
            string s = "shader_set_uniform_i_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
            
        }
        else if (codes[i].find("uniform ivec3") != string::npos) {
            int c = 14;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0,0];" << endl;
            string s = "shader_set_uniform_i_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
          
        }
        else if (codes[i].find("uniform ivec4") != string::npos) {
            int c = 14;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [0,0,0,0];" << endl;
            string s = "shader_set_uniform_i_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 14, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);
          
        }
        else if (codes[i].find("uniform mat2") != string::npos) {
            int c = 13;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = [[0,0],[0,0]];" << endl;
            string s = "shader_set_uniform_matrix_array(shader_get_uniform(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += "\"),";
            s += string(codes[i].begin() + 13, codes[i].begin() + c);
            s += ");";
            draws.push_back(s);

            }
        else if (codes[i].find("uniform mat3") != string::npos) {
                int c = 13;
                while (codes[i].at(c) != ';') {
                    cout << codes[i].at(c++);
                }
                cout << " = [[0,0,0],[0,0,0],[0,0,0]];" << endl;
                string s = "shader_set_uniform_matrix_array(shader_get_uniform(";
                s += shader;
                s += ",\"";
                s += string(codes[i].begin() + 13, codes[i].begin() + c);
                s += "\"),";
                s += string(codes[i].begin() + 13, codes[i].begin() + c);
                s += ");";
                draws.push_back(s);

                }
        else if (codes[i].find("uniform mat4") != string::npos) {
                    int c = 13;
                    while (codes[i].at(c) != ';') {
                        cout << codes[i].at(c++);
                    }
                    cout << " = [[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]];" << endl;
                    string s = "shader_set_uniform_matrix_array(shader_get_uniform(";
                    s += shader;
                    s += ",\"";
                    s += string(codes[i].begin() + 13, codes[i].begin() + c);
                    s += "\"),";
                    s += string(codes[i].begin() + 13, codes[i].begin() + c);
                    s += ");";
                    draws.push_back(s);

                    }
        else if (codes[i].find("uniform sample2D") != string::npos) {
            int c = 17;
            while (codes[i].at(c) != ';') {
                cout << codes[i].at(c++);
            }
            cout << " = noone;" << endl;
            string s = "texture_set_stage(shader_get_sampler_index(";
            s += shader;
            s += ",\"";
            s += string(codes[i].begin() + 17, codes[i].begin() + c);
            s += "\"),";
            s += "sprite_get_texture(";
            s += sprite;
            s += ")";
            s += ");";
            draws.push_back(s);

            }


            

    }
    cout << "\n\n\n绘制事件:" << endl;
    cout << "shader_set(" << shader << ");" << endl;
    for (int i = 0; i < draws.size(); i++) {
        cout << draws[i] << endl;

    }
    cout << "shader_reset()" << endl;

    return 0;
}