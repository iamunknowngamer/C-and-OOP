// Syed Saif ur Rehman Shah (23k-0032)

#include <iostream>
using namespace std;

class ChessPiece{
    string pieceName, pieceColor;
    char pieceSymbol;

public:
    ChessPiece(){
        pieceName = "pawn", pieceColor = "white", pieceSymbol = 'P';
    }
    ChessPiece(string name, string color, char symbol){
        pieceName = name, pieceColor = color, pieceSymbol = symbol;
    }

    void setPieceName(string name){
        pieceName = name;
    }
    void setPieceColor(string color){
        pieceColor = color;
    }
    void setPieceSymbol(char symbol){
        pieceSymbol = symbol;
    }

    string getPieceName(){
        return pieceName;
    }
    string getPieceColor(){
        return pieceColor;
    }
    char getPieceSymbol(){
        return pieceSymbol;
    }
};

class ChessBoard {
public:
    ChessPiece boardPieces[8][8];

    ChessBoard(){

        for(int i=0; i<8; i++) boardPieces[1][i] = ChessPiece("Pawn", "white", 'p');
        boardPieces[0][0] = ChessPiece("Rook", "white", 'r');
        boardPieces[0][1] = ChessPiece("Knight", "white", 'n');
        boardPieces[0][2] = ChessPiece("Bishop", "white", 'b');
        boardPieces[0][3] = ChessPiece("Queen", "white", 'q');
        boardPieces[0][4] = ChessPiece("King", "white", 'k');
        boardPieces[0][5] = ChessPiece("Bishop", "white", 'b');
        boardPieces[0][6] = ChessPiece("Knight", "white", 'n');
        boardPieces[0][7] = ChessPiece("Rook", "white", 'r');

        for(int i=0; i<8; i++) boardPieces[6][i] = ChessPiece("Pawn", "black", 'P');
        boardPieces[7][0] = ChessPiece("Rook", "black", 'R');
        boardPieces[7][1] = ChessPiece("Knight", "black", 'N');
        boardPieces[7][2] = ChessPiece("Bishop", "black", 'B');
        boardPieces[7][3] = ChessPiece("Queen", "black", 'Q');
        boardPieces[7][4] = ChessPiece("King", "black", 'K');
        boardPieces[7][5] = ChessPiece("Bishop", "black", 'B');
        boardPieces[7][6] = ChessPiece("Knight", "black", 'N');
        boardPieces[7][7] = ChessPiece("Rook", "black", 'R');

        for(int i=2; i<=5; i++){
            for(int j = 0; j < 8; j++){
                boardPieces[i][j] = ChessPiece("", "", '.');
            }
        }
    }

    void movePiece(string sourceLocation, string destinationLocation){
        int sourceX, sourceY, destX, destY;
        sourceX = sourceLocation[1] - '0';
        sourceY = sourceLocation[0] - '0' - 48;
        destX = destinationLocation[1] - '0';
        destY = destinationLocation[0] - '0' - 48;

        if(boardPieces[destX][destY].getPieceSymbol() == '.'){
            if(boardPieces[sourceX][sourceY].getPieceName() == "Pawn"){
                if(abs(destX - sourceX) <= 2 && destY == sourceY && (destX - sourceX) > 0){
                    boardPieces[destX][destY] = boardPieces[sourceX][sourceY];
                    boardPieces[sourceX][sourceY] = ChessPiece("", "", '.');
                    display();
                }else cout<<"Invalid Move"<<endl;
            }
            sourceY--;
            destY--;
            if(boardPieces[sourceX][sourceY].getPieceName() == "Knight"){
                if (abs(destX - sourceX) == 2 && (destY == sourceY + 1)){
                    boardPieces[destX][destY] = boardPieces[sourceX][sourceY];
                    boardPieces[sourceX][sourceY] = ChessPiece("", "", '.');
                    display();
                } else cout<<"Invalid Move"<<endl;
            }
        } else cout<<"Move not possible"<<endl;
    }

    void display(){
        cout<<"  a  b  c  d  e  f  g  h  "<<endl;
        for(int i=0; i<8; i++){
            cout << i + 1 << " ";
            for(int j=0; j<8; j++){
                if ((i + j)%2 == 0){
                    cout<<"\x1b[48;5;250m"; // White background 
                } else cout<<"\x1b[48;5;235m"; // Black background

                if(boardPieces[i][j].getPieceColor() == "white"){
                    cout << "\x1b[97m"; // White piece color
                } 
                else if(boardPieces[i][j].getPieceColor() == "black"){
                    cout << "\x1b[30m"; // Black piece color
                }
                cout<<" "<<boardPieces[i][j].getPieceSymbol()<<" \x1b[0m";
            }
            cout<<i+1<<" "<<endl;
        }
        cout<< "  a  b  c  d  e  f  g  h  "<<endl<<endl<<endl;
    }
};

int main(){

    ChessBoard chess;
    cout<<"[Credits: Syed Saif ur Rehman Shah (23k-0032)]"<<endl<<endl;
    chess.display();

    cout <<"Move of white pawn: "<< endl<<endl;
    chess.movePiece("c1", "c3");

    cout <<"Move of black knight: "<<endl<< endl;
    chess.movePiece("b7", "c5");
   
}

