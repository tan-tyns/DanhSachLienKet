#include "Header.h"
int main() {
    SList slist;
    DList dlist;
    CList clist;
    khoiTao_Don(slist);
    khoiTao_Kep(dlist);
    khoiTao_Vong(clist);
    int choice;
    do {
        menu();
        cout << "\nNhap lua chon: ";
        cin >> choice;

        switch (choice) {
        case 1:
            system("cls");
            int chon;
            do {
                menu_dslk_don();
                cout << "\nNhap lua chon: ";
                cin >> chon;
                switch (chon) {
                case 1:
                    nhapDanhSach_Don(slist);
                    cout << "\nDanh sach lien ket don ban vua nhap la: ";
                    xuatDanhSach_Don(slist);
                    break;
                case 2:
                    system("cls");
                    if (slist == NULL) cout << "\nDanh sach lien ket don rong";
                    else{
                        cout << "\nDanh sach lien ket don: ";
                        xuatDanhSach_Don(slist);
                    }
                    break;
                case 3:
                    int them_dau;
                    system("cls");
                    if (slist == NULL) cout << "\nDanh sach lien ket don rong";
                    else {
                        cout << "\nNhap phan tu ban muon them vao dau danh sach: ";
                        cin >> them_dau;
                        themDau_Don(slist, them_dau);
                    }
                    break;
                case 4:
                    int them_cuoi;
                    system("cls");
                    if (slist == NULL) cout << "\nDanh sach lien ket don rong";
                    else {
                        cout << "\nNhap phan tu ban muon them vao cuoi danh sach: ";
                        cin >> them_cuoi;
                        themCuoi_Don(slist, them_cuoi);
                    }
                    break;
                case 5:
                    int so_can_xoa;
                    if (slist == NULL) cout << "\nDanh sach lien ket don rong";
                    else {
                        cout << "\nNhap phan tu ban muon xoa: ";
                        cin >> so_can_xoa;
                        xoa_phantu_Don(slist, so_can_xoa);
                    }
                    break;
                case 6:
                    int so_can_sua, so_moi;
                    system("cls");
                    if (slist == NULL) cout << "\nDanh sach lien ket don rong";
                    else {
                        cout << "\nNhap so can sua trong danh sach lien ket don: ";
                        cin >> so_can_sua;
                        cout << "\nNhap so moi can thay trong danh sach lien ket don: ";
                        cin >> so_moi;
                        sua_Don(slist, so_can_sua, so_moi);
                        cout << "\nDa sua thanh cong!";
                    }
                    break;
                case 7:
                    system("cls");
                    if (slist == NULL) cout << "\nDanh sach lien ket don rong";
                    else {
                        cout << "\nDa dao nguoc danh sach!";
                        daoNguoc_Don(slist);
                    }
                    break;
                case 8:

                    break;
                default:
                    cout << "\nLua chon khong hop le!";
                }
                cout << "\nBan co muon quay lai menu lien ket don? (1: Co, 0: Khong): ";
                cin >> chon;
            } while (chon == 1);
            break;
        case 2:
            system("cls");
            int chon_kep;
            do {
                menu_dslk_kep();
                cout << "\nNhap lua chon: ";
                cin >> chon_kep;
                switch (chon_kep) {
                case 1:
                    nhapDanhSach_Kep(dlist);
                    cout << "\nDanh sach lien ket kep bang vua nhap la: ";
                    xuatDanhSachThuan_Kep(dlist);
                    break;
                case 2:
                    system("cls");
                    if (isEmpty(dlist)) cout << "\nDanh sach lien ket kep rong";
                    else {
                        cout << "\nDanh sach lien ket kep xuat thuan: ";
                        xuatDanhSachThuan_Kep(dlist);
                    }
                    break;
                case 3:
                    system("cls");
                    if (isEmpty(dlist)) cout << "\nDanh sach lien ket kep rong";
                    else {
                        cout << "\nDanh sach lien ket kep xuat nguoc: ";
                        xuatDanhSachNguoc_Kep(dlist);
                    }
                    break;
                case 4:
                    int them_dau;
                    if (isEmpty(dlist)) cout << "\nDanh sach lien ket kep rong";
                    else {
                        cout << "\nNhap phan tu ban muon them vao dau danh sach: ";
                        cin >> them_dau;
                        themDau_Kep(dlist, them_dau);
                    }
                    break;
                case 5:
                    int them_cuoi;
                    if (isEmpty(dlist)) cout << "\nDanh sach lien ket kep rong";
                    else {
                        cout << "\nNhap phan tu ban muon them vao cuoi danh sach: ";
                        cin >> them_cuoi;
                        themCuoi_Kep(dlist, them_cuoi);
                    }
                    break;
                case 6:
                    int so_can_xoa;
                    if (isEmpty(dlist)) cout << "\nDanh sach lien ket kep rong";
                    else {
                        cout << "\nNhap phan tu ban muon xoa khoi danh sach: ";
                        cin >> so_can_xoa;
                        xoa_phantu_Kep(dlist, so_can_xoa);
                    }
                    break;
                case 7:
                    int so_moi,so_cu;
                    if (isEmpty(dlist)) cout << "\nDanh sach lien ket kep rong";
                    else {
                        cout << "\nNhap phan tu ban muon sua trong danh sach: ";
                        cin >> so_cu;
                        cout << "\nNhap phan tu moi: ";
                        cin >> so_moi;
                        sua_Kep(dlist, so_cu, so_moi);
                    }
                    break;
                case 8:
                    if (isEmpty(dlist)) cout << "\nDanh sach lien ket kep rong";
                    daoNguoc_Kep(dlist);
                    cout << "\nDanh sach kep sau khi dao nguoc: ";
                    xuatDanhSachThuan_Kep(dlist);
                    break;
                case 9:
                    break;
                default:
                    cout <<"\nLua chon khong hop le!";
                }
                cout << "\nBan co muon quay lai menu lien ket kep? (1: Co, 0: Khong): ";
                cin >> chon;
            } while (chon == 1);
            break;
        case 3:
            system("cls");
            int chon_vong;
            do {
                menu_dslk_vong();
                cout << "\nNhap lua chon: ";
                cin >> chon_vong;
                switch (chon_vong) {
                case 1:
                    nhapDanhSach_Vong(clist);
                    xuatDanhSach_Vong(clist);
                    break;
                case 2:
                    system("cls");
                    xuatDanhSach_Vong(clist);
                    break;
                case 3:
                    system("cls");
                    int them_dau;
                    if (isEmpty_Vong(clist)) cout << "\nDanh sach lien ket vong rong!";
                    else {
                        cout << "\nNhap phan tu ban muon them vao dau danh sach: ";
                        cin >> them_dau;
                        them_Dau_Vong(clist, them_dau);
                    }
                    break;
                case 4:
                    system("cls");
                    int them_cuoi;
                    if (isEmpty_Vong(clist)) cout << "\nDanh sach lien ket vong rong!";
                    else {
                        cout << "\nNhap phan tu ban muon them vao cuoi danh sach: ";
                        cin >> them_cuoi;
                        them_Cuoi_Vong(clist, them_cuoi);
                    }
                    break;
                case 5:
                    system("cls");
                    int so_can_xoa;
                    if (isEmpty_Vong(clist)) cout << "\nDanh sach lien ket vong rong";
                    else {
                        cout << "\nNhap phan tu ban muon xoa khoi danh sach: ";
                        cin >> so_can_xoa;
                        xoaNode_Vong(clist, so_can_xoa);
                    }
                    break;
                case 6:
                    system("cls");
                    int so_cu;
                    int so_moi;
                    if (isEmpty_Vong(clist)) cout << "\nDanh sach lien ket vong rong";
                    else {
                        cout << "\nNhap so ban muon sua: "; cin >> so_cu;
                        cout << "\nNhap so moi: "; cin >> so_moi;
                        sua_Node_Vong(clist, so_cu, so_moi);
                    }
                    break;
                case 7:
                    if (isEmpty_Vong(clist)) cout << "\nDanh sach lien ket vong rong!";
                    dao_Nguoc_Vong(clist);
                    break;
                case 8:
                    break;
                default:
                    cout << "\nLua chon khong hop le!";
                }
                cout << "\nBan co muon quay lai menu lien ket vong? (1: Co, 0: Khong): ";
                cin >> chon;
            } while (chon == 1);
            break;
        case 4: 
            system("cls");
            cout << "Cam on ban da su dung chuong trinh quan ly danh sach lien ket!";
            break;
        default:
            cout << "Lua chon khong hop le! Vui long nhap lai! ";
            break;
        }
    } while (choice != 4);
    return 0;
}