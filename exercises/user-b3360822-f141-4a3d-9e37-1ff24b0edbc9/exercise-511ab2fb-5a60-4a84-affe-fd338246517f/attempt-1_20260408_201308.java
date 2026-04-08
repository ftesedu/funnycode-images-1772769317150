package vn.back_end_best_practice.controller;


import lombok.AccessLevel;
import lombok.RequiredArgsConstructor;
import lombok.experimental.FieldDefaults;
import org.springframework.http.HttpStatus;
import org.springframework.web.bind.annotation.*;
import vn.back_end_best_practice.dto.request.RoleRequest;
import vn.back_end_best_practice.dto.response.ResponseData;
import vn.back_end_best_practice.dto.response.RoleResponse;
import vn.back_end_best_practice.service.RoleService;

import java.util.List;

@RestController
@RequestMapping("/roles")
@RequiredArgsConstructor
@FieldDefaults(level = AccessLevel.PRIVATE, makeFinal = true)
public class RoleController {
    RoleService roleService;

    @PostMapping
    ResponseData<RoleResponse> create(
            @RequestBody RoleRequest request
            ){
        return ResponseData.<RoleResponse>builder()
                .data(roleService.create(request))
                .status(HttpStatus.CREATED.value())
                .message("Role created successfully")
                .build();
    }

    @GetMapping("/list")
    ResponseData<List<RoleResponse>> getAll(){
        return ResponseData.<List<RoleResponse>>builder()
                .data(roleService.getAll())
                .status(HttpStatus.OK.value())
                .message("Roles fetched successfully")
                .build();
    }

    @DeleteMapping("/{roleName}")
    ResponseData<Void> delete(
            @PathVariable String roleName
    ) {
        roleService.delete(roleName);
        return ResponseData.<Void>builder()
                .status(HttpStatus.OK.value())
                .message("Role deleted successfully")
                .build();
    }
}
