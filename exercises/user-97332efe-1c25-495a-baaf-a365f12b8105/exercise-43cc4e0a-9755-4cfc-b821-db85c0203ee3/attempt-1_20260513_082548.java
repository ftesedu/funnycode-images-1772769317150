package com.project.shopapp.controller;


import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("api/v1/categories")
public class CategoryController {

    @PostMapping
    public ResponseEntity<String> createCategory() {
        return ResponseEntity.ok("Create Category");
    }
}
