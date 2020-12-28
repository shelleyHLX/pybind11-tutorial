# import wrap
import cppimport 

funcs = cppimport.imp('wrap')

def test_add():
    print(funcs.add(5,4))
    assert(funcs.add(3, 4) == 7)
    

if __name__ == '__main__':
    test_add()
