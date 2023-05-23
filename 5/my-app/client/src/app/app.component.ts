import { Component, OnInit } from '@angular/core';
import { ApiService } from './api.service';
import { VERSION } from './version';



@Component({
	selector: 'app-root',
	templateUrl: './app.component.html',
	styleUrls: ['./app.component.css']
})
// export class AppComponent implements OnInit {
// 	title = 'frontEnd';
// 	message: any;
// 	constructor(private apiService: ApiService) { };
// 	ngOnInit() {
// 		this.apiService.getMessage().subscribe(data => {
// 			this.message = data;
// 		});
// 	}
// }

export class AppComponent {
	public version = VERSION;
  }
