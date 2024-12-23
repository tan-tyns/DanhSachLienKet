		#include "Header.h"
		void menu() {
			cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#";
			cout << "\n# Chao mung den menu quan ly danh sach lien ket!     #" << endl;
			cout << "# 1. Danh sach lien ket don                          #" << endl;
			cout << "# 2. Danh sach lien ket kep                          #" << endl;
			cout << "# 3. Danh sach lien ket vong                         #" << endl;
			cout << "# 4. Thoat                                           #" << endl;
			cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#";
		}
		void menu_dslk_don() {
			cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
			cout << "# DANH SACH LIEN KET DON!                                                    #" << endl;
			cout << "# 1.Nhap danh sach lien ket don                                              #" << endl;
			cout << "# 2.Xuat danh sach lien ket don                                              #" << endl;
			cout << "# 3.Them dau danh sach lien ket don                                          #" << endl;
			cout << "# 4.Them cuoi danh sach lien ket don                                         #" << endl;
			cout << "# 5.Xoa 1 phan tu danh sach lien ket don                                     #" << endl;
			cout << "# 6.Sua danh sach lien ket don                                               #" << endl;
			cout << "# 7.Dao nguoc danh sach lien ket don                                         #" << endl;
			cout << "# 8.Thoat                                                                    #" << endl;
			cout << "# Luu y: Vui long nhap danh sach truoc khi them, xoa, sua hoac dao nguoc!    #" << endl;
			cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#";
		}
		void menu_dslk_kep() {
			cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
			cout << "# DANH SACH LIEN KET KEP!                                                    #" << endl;
			cout << "# 1.Nhap danh sach lien ket kep                                              #" << endl;
			cout << "# 2.Xuat thuan danh sach lien ket kep                                        #" << endl;
			cout << "# 3.Xuat nguoc danh sach lien ket kep                                        #" << endl;
			cout << "# 4.Them dau danh sach lien ket kep                                          #" << endl;
			cout << "# 5.Them cuoi danh sach lien ket kep                                         #" << endl;
			cout << "# 6.Xoa 1 phan tu danh sach lien ket kep                                     #" << endl;
			cout << "# 7.Sua danh sach lien ket kep                                               #" << endl;
			cout << "# 8.Dao nguoc danh sach lien ket kep                                         #" << endl;
			cout << "# 9.Thoat                                                                    #" << endl;
			cout << "# Luu y: Vui long nhap danh sach truoc khi them, xoa, sua hoac dao nguoc!    #" << endl;
			cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#";
		}
		void menu_dslk_vong() {
			cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
			cout << "# DANH SACH LIEN KET VONG!                                                   #" << endl;
			cout << "# 1.Nhap danh sach lien ket vong                                             #" << endl;
			cout << "# 2.Xuat danh sach lien ket vong                                             #" << endl;
			cout << "# 3.Them dau danh sach lien ket vong                                         #" << endl;
			cout << "# 4.Them cuoi danh sach lien ket vong                                        #" << endl;
			cout << "# 5.Xoa 1 phan tu danh sach lien ket vong                                    #" << endl;
			cout << "# 6.Sua danh sach lien ket vong                                              #" << endl;
			cout << "# 7.Dao nguoc danh sach lien ket vong                                        #" << endl;
			cout << "# 8.Thoat                                                                    #" << endl;
			cout << "# Luu y: Vui long nhap danh sach truoc khi them, xoa, sua hoac dao nguoc!    #" << endl;
			cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#";
		}
		///////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////DANH_SACH_LIEN_KET_DON////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////
		Nodeptr_Don tao_Node_Don(int data) {
			Nodeptr_Don p = new Node_Don;
			p->data = data;
			p->next = NULL;
			return p;
		}
		void khoiTao_Don(SList& slist) {
			slist = NULL;
		}
		void themDau_Don(SList& slist, int data) {
			Nodeptr_Don p = tao_Node_Don(data);
			p->next = slist;
			slist = p;
		}
		void themCuoi_Don(SList& slist, int data) {
			Nodeptr_Don p = tao_Node_Don(data);
			if (slist == NULL) slist = p;
			else {
				Nodeptr_Don temp = slist;
				while (temp->next != NULL) {
					temp = temp->next;
				}
				temp->next = p;
			}
		}
		void nhapDanhSach_Don(SList& slist){
			int x;
			khoiTao_Don(slist);
			do {
				cout << "Nhap x (-99 de thoat)= ";
				cin >> x;
				if (x == -99)
					break;
				themDau_Don(slist,x);
			} while (1);
		}
		void xuatDanhSach_Don(SList slist) {
			while (slist != NULL) {
				cout << slist->data << " ";
				slist = slist->next;
			}
			cout << endl;
		}
		void xoa_phantu_Don(SList &slist, int so_can_xoa) {
			Nodeptr_Don temp = slist;
			Nodeptr_Don pre = NULL;

			while (temp != NULL) {
				if (temp->data == so_can_xoa) {
					if (pre == NULL) slist = temp->next;
					else pre->next = temp->next;
					delete temp;
					cout << "\nDa xoa phan tu " << so_can_xoa << " ra khoi danh sach.";
					return;
				}
				pre = temp;
				temp = temp->next;
			}
			cout << "\nKhong tim thay phan tu co gia tri " << so_can_xoa << " de xoa!";
		}
		void sua_Don(SList& slist, int so_cu, int so_moi) {
			Nodeptr_Don temp = slist;
			while (temp != NULL) {
				if (temp->data == so_cu) {
					temp->data = so_moi;
					return;
				}
				temp = temp->next;
			}
			cout << "\nKhong tim thay phan tu co gia tri " << so_cu << " de sua! ";
		}
		void daoNguoc_Don(SList &slist) {
			Nodeptr_Don pre = NULL;
			Nodeptr_Don current = slist;
			Nodeptr_Don next = NULL;

			while (current != NULL) {
				next = current->next; // luu lai node tiep theo
				current->next = pre; // dao nguoc con tro
				pre = current; // di chuyen pre len
				current = next; // di chuyen current len
			}
			slist = pre;
		}
		///////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////DANH_SACH_LIEN_KET_KEP////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////
		Nodeptr_Kep tao_Node_Kep(int data) {
			Nodeptr_Kep p = new Node_Kep;
			p->data = data;
			p->next = NULL;
			p->pre = NULL;
			return p;
		}
		void khoiTao_Kep(DList& dlist) {
			dlist.first = NULL;
			dlist.last = NULL;
		}
		int isEmpty(DList dlist) {
			return(dlist.first == NULL ? 1 : 0);
		}
		void themDau_Kep(DList& dlist, int data) {
			Nodeptr_Kep p = tao_Node_Kep(data);
			if (isEmpty(dlist)) {
				dlist.first = p;
				dlist.last = p;
			}
			else {
				p->next = dlist.first;
				dlist.first->pre = p;
				dlist.first = p;
			}
		}
		void themCuoi_Kep(DList& dlist, int data) {
			Nodeptr_Kep p = tao_Node_Kep(data);
			if (isEmpty(dlist)) {
				dlist.first = p;
				dlist.last = p;
			}
			else {
				dlist.last->next = p;
				p->pre = dlist.last;
				dlist.last = p;
			}
		}
		void nhapDanhSach_Kep(DList& dlist) {
			int x;
			khoiTao_Kep(dlist);
			do {
				cout << "\nNhap du lieu vao danh sach (-99 de thoat): ";
				cin >> x;
				if (x == -99) break;
				themDau_Kep(dlist, x);
				
			} while (1);
		}
		void xuatDanhSachThuan_Kep(DList dlist) {
			Nodeptr_Kep p = dlist.first;
			while (p != NULL) {
				cout << p->data << " ";
				p = p->next;
			}

		}
		void xuatDanhSachNguoc_Kep(DList dlist) {
			Nodeptr_Kep p = dlist.last;
			while (p != NULL) {
				cout << p->data << " ";
				p = p->pre;
			}
		}
		void xoa_phantu_Kep(DList& dlist, int so_can_xoa) {
			Nodeptr_Kep temp = dlist.first;
			while (temp != NULL) {
				if (temp->data == so_can_xoa) {
					if (temp->pre != NULL) temp->pre->next = temp->next;
					else dlist.first = temp->next;
					if (temp->next != NULL) temp->next->pre = temp->pre;
					else dlist.last = temp->pre;
					delete temp;
					return;
				}
				temp = temp->next;
			}
			cout << "\nPhan tu " << so_can_xoa << " khong ton tai trong danh sach!";
		}
		void sua_Kep(DList& dlist, int so_cu, int so_moi) {
			Nodeptr_Kep temp = dlist.first;
			bool found = false;
			while (temp != NULL) {
				if (temp->data == so_cu) {
					temp->data = so_moi;
					found = true;	
				}
				temp = temp->next;
			}
			if(!found) cout<<"\nPhan tu " << so_cu << " khong ton tai trong danh sach!";
		}
		void daoNguoc_Kep(DList& dlist) {
			if (dlist.first == NULL) return;
			Nodeptr_Kep current = dlist.first;
			Nodeptr_Kep temp = NULL;

			while (current != NULL) {
				temp = current->pre;
				current->pre = current->next;
				current->next = temp;
				
				current = current->pre;
			}
			if (temp != NULL) {
				dlist.last = dlist.first;
				dlist.first = temp->pre;
			}
		}
		///////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////DANH_SACH_LIEN_KET_VONG////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////
		void khoiTao_Vong(CList& clist) {
			clist.first = NULL;
			clist.last = NULL;
		}
		Nodeptr_Vong tao_Node_Vong(int data) {
			Nodeptr_Vong p = new Node_Vong;
			if (p == NULL) return 0;
			p->data = data;
			p->link = NULL;
			return p;
		}
		int isEmpty_Vong(CList clist) {
			return clist.first == NULL ? 1 : 0;
		}
		void them_Dau_Vong(CList& clist, int x) {
			Nodeptr_Vong p = tao_Node_Vong(x);
			if (p == nullptr) return; // Check for memory allocation failure  

			if (isEmpty_Vong(clist)) {
				clist.first = clist.last = p; // If the list is empty  
				p->link = p; // Point to itself  
			}
			else {
				p->link = clist.first; // New node points to the first node  
				clist.last->link = p;   // Last node points to the new node  
				clist.first = p;        // Update first to the new node  
			}
		}
		void them_Cuoi_Vong(CList& clist, int x) {
			Nodeptr_Vong p = tao_Node_Vong(x);
			if (p == nullptr) return; // Check for memory allocation failure  

			if (isEmpty_Vong(clist)) {
				clist.first = clist.last = p; // If the list is empty  
				p->link = p; // Point to itself  
			}
			else {
				clist.last->link = p; // Last node points to the new node  
				p->link = clist.first; // New node points to the first node  
				clist.last = p;        // Update last to the new node  
			}

		}
		void nhapDanhSach_Vong(CList& clist) {
			int x;
			do {
				cout << "Nhap x (-99 de thoat)= ";
				cin >> x;
				if (x == -99) break;   
				them_Dau_Vong(clist, x); 
			} while (true);
		}
		void xuatDanhSach_Vong(CList clist) {
			cout << "Danh sach lien ket vong: ";
			Nodeptr_Vong p = clist.first;
			do {
				cout << p->data << " ";
				p = p->link;
			} while (p != clist.first);
			cout << endl;
		}
		void xoaNode_Vong(CList& clist, int value) {
			Nodeptr_Vong current = clist.first;
			Nodeptr_Vong previous = clist.last; // Start from the last node to handle the circular nature  

			do {
				if (current->data == value) {
					if (current == clist.first && current == clist.last) {
						// Only one node in the list  
						delete current;
						clist.first = clist.last = nullptr; // Now the list is empty  
					}
					else if (current == clist.first) {
						// Deleting the first node  
						clist.first = current->link; // Update the first pointer  
						clist.last->link = clist.first; // Last node now points to new first  
						delete current; // Delete the old first node  
					}
					else if (current == clist.last) {
						// Deleting the last node  
						clist.last = previous; // Update the last pointer  
						clist.last->link = clist.first; // Last node now points to first  
						delete current; // Delete the old last node  
					}
					else {
						// Deleting a middle node  
						previous->link = current->link; // Bypass the current node  
						delete current; // Delete the current node  
					}
					return; // Node deleted, exit the function  
				}
				previous = current; // Move to the next node  
				current = current->link;
			} while (current != clist.first); // Loop until back to the start  

			cout << "Khong tim thay phan tu de xoa." << endl; // Value not found 
		}
		void dao_Nguoc_Vong(CList& clist) {
			Nodeptr_Vong prev = clist.last;
			Nodeptr_Vong current = clist.first;
			Nodeptr_Vong next;

			do {
				next = current->link;
				current->link = prev;
				prev = current;
				current = next;
			} while (current != clist.first);

			clist.first = prev;
			clist.last = current;
		}
		void sua_Node_Vong(CList& clist, int old_data, int new_data) {
			Nodeptr_Vong current = clist.first;
			//Duyet danh sach den khi tim thay nut can sua hoac quay lai nut dau
			
			do {
				if (current->data == old_data) {
					current->data = new_data;
					return; //Tim thay va sua xong, thoat khoi ham
				}
				current = current->link;
			} while (current != clist.first);

			cout << "Khong tim thay node can sua!" << endl;
		}