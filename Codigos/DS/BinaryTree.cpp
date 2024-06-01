struct binaryTree{
    struct nodo{
        ll valor;
        nodo* izquierda = nullptr;
        nodo* derecha   = nullptr;
    };
    nodo* raiz = new nodo;
    void add(nodo* &actual,ll _valor){
        if(actual==nullptr){
            actual = new nodo;
            actual->valor = _valor;
            return;
        }
        if(_valor>actual->valor) add(actual->derecha,_valor);
        else if(_valor<actual->valor) add(actual->izquierda,_valor);
    }
    void preOrder(nodo* actual){
        if(actual==nullptr) return;
        cout<<actual->valor<<' ';
        preOrder(actual->izquierda);
        preOrder(actual->derecha);
    }
    void inOrder(nodo* actual){
        if(actual==nullptr) return;
        inOrder(actual->izquierda);
        cout<<actual->valor<<' ';
        inOrder(actual->derecha);
    }
    void postOrder(nodo* actual){
        if(actual==nullptr) return;
        postOrder(actual->izquierda);
        postOrder(actual->derecha);
        cout<<actual->valor<<' ';
    }
};